#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b);		// �Լ� ����(����)

int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;		// �Լ��� ������ �����ϴ� ���� ��� ����� (�ؿ� �ڵ� ���� �ȵ�)
	}
	else {

	}
}
void guide(void) {
	printf("inputNumber �Լ��� ���� ������ �Է��� �� �ֽ��ϴ�.\n");
	printf("���� printNumber �Լ��� ���� �Է��� ������ ����� ���� �ֽ��ϴ�.\n");
}
void printNumber(int num) {
	printf("����� �Է��� ������ %d �Դϴ�.\n", num);
}
int inputNumber(void) {
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

	return num;
}

int main3(void) {
	guide();
	int num = inputNumber();
	printNumber(num);
	num = inputNumber();
	printNumber(num);
	return 0;
}
int add(int a, int b) {		// �Լ� ���� {}
	return a + b;
}