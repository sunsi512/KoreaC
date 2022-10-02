#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	
	// 조건문 : if, switch ()안에 있는 내용이 맞으면 실행
	// 반복문 : while, for
	// if : 만약 ()라면, while : ()동안

	/*
	1. 안녕하세요를 15번 썼다고 할 때, 15개인지 확신할 수 없음
	2. 갯수가 많아질수록 관리가 힘들어짐
	--> 반복문
	*/

	// 반복문1
	int num1 = 3;
	int 횟수 = 0;

	while (횟수 < 5) {
		// () : 조건
		// {} : 내용 --> 조건이 맞으면 실행 --> 실행했으면 조건 검사하는 부분으로 되돋아감
		printf("10보다 작다\n");

		// 무한반복을 피하기 위해 값을 값을 증감시켜 언젠가 조건을 틀리게 해줘야함
		
		// 3번만
		횟수 ++ ;			// 조건에 들어있는 변수를 내부에서 변경
	}

	int num = 0;
	
	while (num < 3) {
		printf("num is %d now\n", num);
		num++;
	}
	int num2 = 0;

	while (num2 != -1) {
		printf("숫자를 입력하세요(-1 입력시 종료) :");
		scanf("%d", &num2);
		if (num2 == -1)
			printf("종료합니다.\n");
		else
			printf("%d 을(를) 입력하셨네요.\n", num2);
	}

	// 1. 정수를 입력받고
	// 2. 반복문을 통해서 1씩 늘리는데 합계는 따로 저장
	// {}안에서 만들어진 변수는 {}를 나가면 없어짐 == while안에서 만들어진 변수가 아니면 변수와 값이 유지됨

	// 3. 반복문 끝나고 합계 출력

	printf("정수를 입력하세요 : ");
	scanf("%d", &num1);
	int 회차 = 1;
	int 합산 = 0;
	while (회차 <= num1) {
		합산 += 회차;
		회차++;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", 회차 - 1, 합산);

	// do~while과  while의 차이
	// do~while: 조건이 틀려도 무조건 1번은 실행
	// while은 조건이 틀리면 실행 안함

	// 틀린 조건
	while (0 > 3) {
		printf("실행 안됨");
	}

	// do~while
	do {
		printf("do~while 실행 안됨\n");
	} while (0 > 3);
}