#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main1() {
	// ���ǹ�
	// if(){}
	// else if(){}
	// else{}

	// if : ()�� ������ ������ {} ����
	// else if : ���� �ִ� if�� ()�� Ʋ���� else if�� ()�� ������ {} ����
	// else : if �� else if�� ()�� ��� Ʋ���� ����

	int num1 = 3;

	if (num1 != 4) {
		printf("4�� �ƴϴ�\n");
	}
	// ==========================================

	if (num1 == 0) {
		// if�� ������ �������� ����
		printf("0�� ���� �� ����\n");
	}
	else if (num1 == 1) {
		// ���� �ִ� if�� else if�� ��� Ʋ���� ����
		printf("1�� ���� �� ���� \n");
	}
	else if (num1 == 2) {
		// ���� �ִ� if�� else if�� ��� Ʋ���� ����
		printf("2�� ���� �� ����\n");
	}
	else if (num1 == 3) {
		// ���� �ִ� if�� else if�� ��� Ʋ���� ����
		printf("3�� ���� �� ����\n");
	}
	else {
		// if�� else if ��� Ʋ���� ����
		printf("�´°� �ϳ��� ���� �� ����");
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
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &number);

	if (number % 2 == 1) {
		printf("�Է��� ������ Ȧ���Դϴ�.");
	}
	else if (number % 2 == 0) {
		printf("�Է��� ������ ¦���Դϴ�.");
	}


	printf("\n\n���̸� �Է����ּ��� : ");
	int age;
	scanf("%d", &age);
	
	if (age < 6 || age >= 65) {
		printf("����ö ����� �����Դϴ�.");
	}
	else if (age <= 6 && age < 13) {
		printf("����ö ����� 500���Դϴ�.");
	}
	else if (age <= 13 && age < 19) {
		printf("����ö ����� 900���Դϴ�.");
	}
	else {
		printf("����ö ����� 1250���Դϴ�.");
	}
}