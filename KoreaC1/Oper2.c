#include <stdio.h>

void main() {
	int number1 = 3 + 4 + 5;
	int number2 = 3 + 4 + 5;		// 23
	int number3 = (3 + 4) + 5;		// 35
	float number4 = number3 / 3.0f;	// 11.xxxxx

	// 86p
	int ���� = 86;
	int ���� = 75;
	int ���� = 88;
	int ��ȸ = 60;
	int ���� = 97;

	int �հ� = ���� + ���� + ���� + ��ȸ + ����;
	float ��� = (float)�հ� / 5;

	printf("¯���� �⸻��� ������ ����� %f�Դϴ�.", ���);

	// ========================

	float num1 = 136.4f;
	float num2 = 37.11f;

	int a1 = (int)num1;
	int a2 = (int)num2;

	int b1 = a1 % 10;
	int b2 = a2 % 10;

	printf("\n\n%d, %d", b1, b2);
	// �����ڸ� ���� ������ �����ؼ� ���

	// =======================
	int ������1 = 33;
	int ������2 = 17;

	int �ٱ��� = ������1 / 10;
	int �ٱ���2 = ������2 / 10;
	printf("\n�ʿ��� �ٱ����� �� : %d", �ٱ���+1);
	printf("\n�ʿ��� �ٱ����� �� : %d", �ٱ���2+1);
}