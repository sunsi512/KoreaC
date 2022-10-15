#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 배열 : 변수를 뭉쳐놓은 것
	char arr1[100];		// char변수 100개 뭉쳐놓음

	// 왜 뭉쳐놓냐? 
	// 1. 변수를 여러개 만들기 번거로워서 (변수명 100개 짓기 어려움)
	// 2. 하나의 변수명으로 여러개의 값을 따로 관리하기 위해서 (ex. 카페메뉴 변수명 100개 -> 변수명1개)
	// 3. 배열의 장점은 반복문을 통해서 전체 조회가 가능 (변수를 100개 따로 만들면 전체보여주기 불가능)

	int num1 = 1;
	int num2 = 10;
	int num3 = 100;

	// 10000개면 10000번 해줘야함
	printf("%d", num1);
	printf("%d", num2);
	printf("%d", num3);

	int num[3] = { 1, 10, 100 };		// 0번~ 2번

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%d\n", num[1]);
	}

	char str1[100] = { 'h','i','\0' };
	char str2[100] = "hi";
	int num_[100] = { 0,1,2,3, };
	float fNum1[100] = { 0.0f, 1.0f, };


	int numbers[3] = { 1,2,3 };
	char characters[] = { 'a','b','c','d','e' };

	int i;
	int odd[3];
	int even[5] = { 2,4,6,8,10 };

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d%d%d\n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++) {
		printf("%d", even[i]);
	}printf("\n");

	//=====================================

	//char greet[] = "Hello, Guys!";
	//printf("1차원 배열 greet의 길이는 : %d\n", sizeof(greet));

	////======================================

	//char mind[30] = "I Love programming!";
	//printf("%s\n", mind);

	//mind[7] = '\0';
	//printf("%s\n", mind);

	//mind[1] = '\0';
	//printf("%s\n", mind);

	////=====================================

	//char str[50];

	//printf("문자열을 입력하세요:");
	//scanf("%s", str);

	//printf("입력된 문자열 : %s\n", str);

	//====================================
	
	return 0;
}