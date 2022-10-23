#include <stdio.h>

// num1�� num2�� ���� ���� �ٲ�
void Swap1(int a_num1, int a_num2) {
	int bk = a_num1;
	a_num1 = a_num2;
	a_num2 = bk;

	printf("�Լ����ο��� num1 : %d, num2 : %d\n", a_num1, a_num2);
}

void Swap2(int* p_num1, int* p_num2) {
	int bk = *p_num1;			// bk = num1
	*p_num1 = *p_num2;			// num1 = num2
	*p_num2 = bk;				// num2 = bk
}

void swapNumber(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("�Լ� �ȿ��� Ȯ���� ���, num1 : %d num2: %d\n", *ptr1, *ptr2);

}

int main2()
{
	// �Լ��� �Ű����� : ���� ����
	int num1 = 3, num2 = 4;
	printf("num1 = %d, num2 : %d\n", num1, num2);
	//Swap1(num1, num2);				// main�� �ִ� num1�� Swap�� num1�� �ٸ� ����, ���� ����
	Swap2(&num1, &num2);		// ���� �ƴ� �ּҸ� ����
	printf("num1 = %d, num2 : %d\n", num1, num2);

	// �Ű������� ���� ��ü�� �����Ϸ���? -> ������
	// ���� ���� -> �ּ�(��ġ)�� ����

	int number1 = 33, number2 = 99;
	swapNumber(&number1, &number2);
	printf("�Լ� ȣ�� �Ϸ� �� Ȯ���� ���, number1 : %d number2 : %d\n", number1, number2);

	return 0;
}