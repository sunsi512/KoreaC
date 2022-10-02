#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main1() {
	// 조건문
	// if(){}
	// else if(){}
	// else{}

	// if : ()의 내용이 맞으면 {} 실행
	// else if : 위에 있는 if의 ()가 틀리고 else if의 ()가 맞으면 {} 실행
	// else : if 와 else if의 ()가 모두 틀리면 실행

	int num1 = 3;

	if (num1 != 4) {
		printf("4가 아니다\n");
	}
	// ==========================================

	if (num1 == 0) {
		// if의 조건이 맞을때만 실행
		printf("0과 같을 때 실행\n");
	}
	else if (num1 == 1) {
		// 위에 있는 if나 else if가 모두 틀리면 실행
		printf("1과 같을 때 실행 \n");
	}
	else if (num1 == 2) {
		// 위에 있는 if나 else if가 모두 틀리면 실행
		printf("2와 같을 때 실행\n");
	}
	else if (num1 == 3) {
		// 위에 있는 if나 else if가 모두 틀리면 실행
		printf("3과 같을 때 실행\n");
	}
	else {
		// if나 else if 모두 틀리면 실행
		printf("맞는게 하나도 없을 때 실행");
	}


	int num = 3;

	if (num == 2) {
		printf("state 1\n");
	}
	else if (num > 2 && num < 4) {
		printf("state 2\n");
	}
	else if (num == 3) {
		printf("state 3\n");
	}
	else {
		printf("state 4\n");
	}

	int number;
	printf("정수를 입력하세요 : ");
	scanf("%d", &number);

	if (number % 2 == 1) {
		printf("입력한 정수는 홀수입니다.");
	}
	else if (number % 2 == 0) {
		printf("입력한 정수는 짝수입니다.");
	}


	printf("\n\n나이를 입력해주세요 : ");
	int age;
	scanf("%d", &age);
	
	if (age < 6 || age >= 65) {
		printf("지하철 요금은 무료입니다.");
	}
	else if (age <= 6 && age < 13) {
		printf("지하철 요금은 500원입니다.");
	}
	else if (age <= 13 && age < 19) {
		printf("지하철 요금은 900원입니다.");
	}
	else {
		printf("지하철 요금은 1250원입니다.");
	}
}