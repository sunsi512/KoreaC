#include <stdio.h>

int main4() {

	// ������ �迭 (�����Ͱ��� �����ϴ� �迭)
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int* p_num1 = &num1;
	int* p_num2 = &num2;
	int* p_num3 = &num3;

	int num[3] = { num1, num2 , num3 };				// ������ ����ִ� �迭
	int* p_num[3] = { p_num1, p_num2, p_num3 };		// �ּҸ� ����̾��� �迭

	// 179p

	int n1 = 3, n2 = 6, n3 = 9;

	// ������ �迭�� ���� �� �ʱ�ȭ
	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int* ptr3 = &n3;

	// �ּҿ� ����ִ� ���� ����ϰ� �� �ּҸ� ���
	int* parr[3] = { ptr1, ptr2, ptr3 };

	printf("%d%d%d\n", *parr[0], *parr[1], *parr[2]);
	printf("%d%d%d\n", parr[0], parr[1], parr[2]);

	// 1
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptr = arr;
	printf("%d %d %d %d %d\n", *ptr, *ptr + 1, *ptr + 2, *ptr + 3, *ptr + 4);
	return 0;
}