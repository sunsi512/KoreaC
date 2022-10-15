#include <stdio.h>

int g_num = 3;		// 전역변수 (모든 곳에서 사용 가능한 변수)
// 지역변수 (함수 종료시에 사가제되는 변수)
// 그렇다면 모두 전역변수로 하면 되겠네! --> 프로그램 성능이 떨어짐
// 전역변수는 힙이라는 공간에 생성, 지역변수는 스택이라는 공간에 생성 (힙은 공간이 작고, 스택은 공간 큼)

// 변수는 {}안에서 만들어지면 해당 {}를 벗어나면 삭제된다. 
int localFunc(int num) {
	int num3 = 1;			// localFunc 안에서만 사용 가능한 변수
	//printf("%d\n", num2);		// main에서 만들어지고 없어지는 변수 -- 지역변수 (함수 안에서 만들어진 변수)
	printf("%d\n", g_num);		// 전역변수 사용

	if (num > 50) {
		num++;
	}

	int result = 0;
	return result + num;
}
int main7(void) {
	int num2 = 0;		// main 안에서만 사용 가능한 변수
	// printf(%d\n", num3);		// localFunc에서 만들어지고 없어지는 변수 -- 지역변수
	printf(" % d\n", g_num);	// 전역변수 사용

	static int s_num = 99;		// 함수 안에서 만들어지는 전역변수 (함수가 끝나도 제거되지 않습니다)

	localFunc(s_num);
	printf("static의 변수 %d\n", s_num);

	// 조건문, 반복문 안에서 만든 함수
	if (1) {
		int num4 = 5;
	}
	/*printf("%d\n", num4)*/

	int num = 5;
	int result = localFunc(num);
	printf("결과 : %d\n", result);

	return 0;		// main의 리턴은 프로그램이 종료된 때 알려줄 메시지
}