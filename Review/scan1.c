#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main2() {

	//int num = 0;
	//printf("숫자를 입력하세요 >> ");			// 출력
	//scanf("%d", &num);							// 입력
	//printf("내가 입력한 숫자는 %d \n", num);	

	//char character;
	//int inum;
	//float fnum;

	//scanf("%c", &character);
	//scanf("%d", &inum);
	//scanf("%f", &fnum);

	//printf("% c % d % f \n", character, inum, fnum);

	int num1, num2, num3;
	float fnum1, fnum2;

	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("입력된 정수들 : %d %d %d \n", num1,num2,num3);

	printf("실수, 정수, 실수 차례대로 입력 : ");
	scanf("%f %d %f", &fnum1, &num1, &fnum2);
	printf("입력된 값들 : %0.2f %d %0.2f \n", fnum1, num1, fnum2);

	int num4, num5, num6;

	printf("세 개의 정수 입력 : ");

	// 순서대로 8진수, 16진수, 10진수 입력
	scanf("%o %x %d", &num4, &num5, &num6);
	printf("입력된 정수들 : %d %d %d \n", num4, num5, num6);

	// #define이란 ? 설정값 세팅
#define MY_NUMBER	"123"
	// MY_NUMBER라고 적으면 123을 적은것처럼 동작함

}