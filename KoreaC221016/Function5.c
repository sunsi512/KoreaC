#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 237p
// 1
int ��Ģ����(int num1, int num2) {
	printf("%d\n %d\n %d\n %d\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);
}

// 2
int ����(int num3, int num4) {
	for (int num5 = num3 < num4; num3++;) {
		if (num3 == num4) {
			printf("%d�� %d ������ ������ ������ : %d", num3, num4, num3 + num4 + num5);
			continue;
		}
	}
}

int main() {
	int num1 = 0;
	int num2 = 0;
	printf("ù ��° ���� �Է��ϼ��� >>> ");
	scanf("%d", &num1);
	printf("�� ��° ���� �Է��ϼ��� >>> ");
	scanf("%d", &num2);
	��Ģ����(num1, num2);

	int num3 = 0;
	int num4 = 0;
	printf("ù ��° ���� �Է��ϼ��� >>> ");
	scanf("%d", &num3);
	printf("�� ��° ���� �Է��ϼ��� >>> ");
	scanf("%d", &num4);
	����(num3, num4);
}