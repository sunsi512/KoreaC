#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main3() {
	// 연산자
	// 1. 산술연산자
	// 2. 비교연산자
	// 3. 논리연산자,,,
	// 4. 삼항연산자 : 주어진 조건에 따라서 다른 코드를 실행

	// 숫자가  10보다 크면 큰 수, 작으면 작은 수 출력
	int num = 11;
	(num > 10) ? printf("큰 수") : printf("작은 수");

	// 조건 ? 맞으면 실행할 코드 : 틀리면 실행할 코드
	int num1;

	printf("\n정수 입력 : ");
	scanf("%d", &num1);
	(num1 % 2 == 0) ? printf("짝수") : printf("홀수");

}