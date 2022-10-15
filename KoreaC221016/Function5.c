#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 237p
// 1
int 사칙연산(int num1, int num2) {
	printf("%d\n %d\n %d\n %d\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);
}

// 2
int 총합(int num3, int num4) {
	for (int num5 = num3 < num4; num3++;) {
		if (num3 == num4) {
			printf("%d와 %d 사이의 정수의 총합은 : %d", num3, num4, num3 + num4 + num5);
			continue;
		}
	}
}

int main() {
	int num1 = 0;
	int num2 = 0;
	printf("첫 번째 수를 입력하세요 >>> ");
	scanf("%d", &num1);
	printf("두 번째 수를 입력하세요 >>> ");
	scanf("%d", &num2);
	사칙연산(num1, num2);

	int num3 = 0;
	int num4 = 0;
	printf("첫 번째 수를 입력하세요 >>> ");
	scanf("%d", &num3);
	printf("두 번째 수를 입력하세요 >>> ");
	scanf("%d", &num4);
	총합(num3, num4);
}