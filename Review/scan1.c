#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main2() {

	//int num = 0;
	//printf("���ڸ� �Է��ϼ��� >> ");			// ���
	//scanf("%d", &num);							// �Է�
	//printf("���� �Է��� ���ڴ� %d \n", num);	

	//char character;
	//int inum;
	//float fnum;

	//scanf("%c", &character);
	//scanf("%d", &inum);
	//scanf("%f", &fnum);

	//printf("% c % d % f \n", character, inum, fnum);

	int num1, num2, num3;
	float fnum1, fnum2;

	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("�Էµ� ������ : %d %d %d \n", num1,num2,num3);

	printf("�Ǽ�, ����, �Ǽ� ���ʴ�� �Է� : ");
	scanf("%f %d %f", &fnum1, &num1, &fnum2);
	printf("�Էµ� ���� : %0.2f %d %0.2f \n", fnum1, num1, fnum2);

	int num4, num5, num6;

	printf("�� ���� ���� �Է� : ");

	// ������� 8����, 16����, 10���� �Է�
	scanf("%o %x %d", &num4, &num5, &num6);
	printf("�Էµ� ������ : %d %d %d \n", num4, num5, num6);

	// #define�̶� ? ������ ����
#define MY_NUMBER	"123"
	// MY_NUMBER��� ������ 123�� ������ó�� ������

}