#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main2() {
	// ���ǹ�  if, switch

	// �� : ����O, ������O
	// if(){}
	// else if(){}
	// else{}

	// switch(){} : ���� ���� ���ҋ� ���� (����X, ������O)
	int num1 = 3;
	switch (num1) {
		// () : ���� (���� ���)
		// {} : ����
	case 0:				// case ���� �ִ� ���� ()�� �ִ� ���� ��
		// num1 == 0
		printf("0�� ���� �� ����\n");
		break;			// �� ���̽��� break; �� �־��� (���� �ȳ����� �ؿ� ���̽������ ��� ������)
	case 1:
		// num1 == 1
		printf("1�� ���� �� ����\n");
		break;
	case 2:
		// num1 == 2
		printf("2�� ���� �� ����\n");
		break;
	case 3:
		// num1 == 3
		printf("3�� ���� �� ����\n");
		break;
	default:
		// else
		printf("�ϳ��� �´°� ���� �� ����");
	}

	int num;
	printf("input some positive number : ");
	scanf("%d", &num);

	switch (num) {
	case 1:
	case 3:
	case 5:
		printf("odd\n");
		break;

	case 2:
	case 4:
	case 6:
		printf("even\n");
		break;
	default:
		printf("maybe bigger than 6\n");
	}printf("switch state end.\n");

	int num2;
	printf("input some positive number : ");
	scanf("%d", &num2);

	switch (num2)
	{
	case 1:
		printf("num is 1\n");
		break;
	case 2:
		printf("num is 2\n");
		break;
	case 3:
		printf("num is 3\n");
	default:
		printf("maybe bigger than 3\n");
		break;
	}printf("switch state end.\n");
	return 0;

	int ���� = 88;
	int ���� = 90;
	int ���� = 58;
	int ��ȸ = 81;
	int ���� = 72;
	int �հ� = ���� + ���� + ���� + ��ȸ + ����;

	if (�հ� / 5.0f >= 90) {
		printf("A");
	}
	else if (�հ� / 5.0f >= 80) {
		printf("B");
	}
	else if (�հ� / 5.0f >= 70) {
		printf("C");
	}
	else if (�հ� / 5.0f > 60) {
		printf("D");
	}
	else {
		printf("F");
	}
}