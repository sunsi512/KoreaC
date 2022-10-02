#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main2() {
	// 조건문  if, switch

	// 비교 : 범위O, 같은값O
	// if(){}
	// else if(){}
	// else{}

	// switch(){} : 같은 값을 비교할떄 한정 (범위X, 같은값O)
	int num1 = 3;
	switch (num1) {
		// () : 조건 (비교할 대상)
		// {} : 내용
	case 0:				// case 옆에 있는 값과 ()에 있는 값을 비교
		// num1 == 0
		printf("0과 같을 때 실행\n");
		break;			// 각 케이스에 break; 을 넣어줌 (만약 안넣으면 밑에 케이스들까지 모두 실행함)
	case 1:
		// num1 == 1
		printf("1과 같을 때 실행\n");
		break;
	case 2:
		// num1 == 2
		printf("2와 같을 때 실행\n");
		break;
	case 3:
		// num1 == 3
		printf("3과 같을 때 실행\n");
		break;
	default:
		// else
		printf("하나도 맞는게 없을 때 실행");
	}

	int num;
	printf("input some positive number : ");
	scanf("%d", &num);

	switch (num) {
	case 1:
	case 3:
	case 5:
		printf("odd\n");
		break;

	case 2:
	case 4:
	case 6:
		printf("even\n");
		break;
	default:
		printf("maybe bigger than 6\n");
	}printf("switch state end.\n");

	int num2;
	printf("input some positive number : ");
	scanf("%d", &num2);

	switch (num2)
	{
	case 1:
		printf("num is 1\n");
		break;
	case 2:
		printf("num is 2\n");
		break;
	case 3:
		printf("num is 3\n");
	default:
		printf("maybe bigger than 3\n");
		break;
	}printf("switch state end.\n");
	return 0;

	int 국어 = 88;
	int 영어 = 90;
	int 수학 = 58;
	int 사회 = 81;
	int 과학 = 72;
	int 합계 = 국어 + 영어 + 수학 + 사회 + 과학;

	if (합계 / 5.0f >= 90) {
		printf("A");
	}
	else if (합계 / 5.0f >= 80) {
		printf("B");
	}
	else if (합계 / 5.0f >= 70) {
		printf("C");
	}
	else if (합계 / 5.0f > 60) {
		printf("D");
	}
	else {
		printf("F");
	}
}