#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// �迭 : ������ ���ĳ��� ��
	char arr1[100];		// char���� 100�� ���ĳ���

	// �� ���ĳ���? 
	// 1. ������ ������ ����� ���ŷο��� (������ 100�� ���� �����)
	// 2. �ϳ��� ���������� �������� ���� ���� �����ϱ� ���ؼ� (ex. ī��޴� ������ 100�� -> ������1��)
	// 3. �迭�� ������ �ݺ����� ���ؼ� ��ü ��ȸ�� ���� (������ 100�� ���� ����� ��ü�����ֱ� �Ұ���)

	int num1 = 1;
	int num2 = 10;
	int num3 = 100;

	// 10000���� 10000�� �������
	printf("%d", num1);
	printf("%d", num2);
	printf("%d", num3);

	int num[3] = { 1, 10, 100 };		// 0��~ 2��

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%d\n", num[1]);
	}

	char str1[100] = { 'h','i','\0' };
	char str2[100] = "hi";
	int num_[100] = { 0,1,2,3, };
	float fNum1[100] = { 0.0f, 1.0f, };


	int numbers[3] = { 1,2,3 };
	char characters[] = { 'a','b','c','d','e' };

	int i;
	int odd[3];
	int even[5] = { 2,4,6,8,10 };

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d%d%d\n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++) {
		printf("%d", even[i]);
	}printf("\n");

	//=====================================

	//char greet[] = "Hello, Guys!";
	//printf("1���� �迭 greet�� ���̴� : %d\n", sizeof(greet));

	////======================================

	//char mind[30] = "I Love programming!";
	//printf("%s\n", mind);

	//mind[7] = '\0';
	//printf("%s\n", mind);

	//mind[1] = '\0';
	//printf("%s\n", mind);

	////=====================================

	//char str[50];

	//printf("���ڿ��� �Է��ϼ���:");
	//scanf("%s", str);

	//printf("�Էµ� ���ڿ� : %s\n", str);

	//====================================
	
	return 0;
}