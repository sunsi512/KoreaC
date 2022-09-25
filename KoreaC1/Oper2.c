#include <stdio.h>

void main() {
	int number1 = 3 + 4 + 5;
	int number2 = 3 + 4 + 5;		// 23
	int number3 = (3 + 4) + 5;		// 35
	float number4 = number3 / 3.0f;	// 11.xxxxx

	// 86p
	int 국어 = 86;
	int 영어 = 75;
	int 수학 = 88;
	int 사회 = 60;
	int 과학 = 97;

	int 합계 = 국어 + 영어 + 수학 + 사회 + 과학;
	float 평균 = (float)합계 / 5;

	printf("짱구의 기말고사 성적의 평균은 %f입니다.", 평균);

	// ========================

	float num1 = 136.4f;
	float num2 = 37.11f;

	int a1 = (int)num1;
	int a2 = (int)num2;

	int b1 = a1 % 10;
	int b2 = a2 % 10;

	printf("\n\n%d, %d", b1, b2);
	// 앞의자리 수만 변수로 저장해서 출력

	// =======================
	int 복숭아1 = 33;
	int 복숭아2 = 17;

	int 바구니 = 복숭아1 / 10;
	int 바구니2 = 복숭아2 / 10;
	printf("\n필요한 바구니의 수 : %d", 바구니+1);
	printf("\n필요한 바구니의 수 : %d", 바구니2+1);
}