#include <stdio.h>

void main5() {
	// 45p

	char a[] = "������ �ڷ���";
	char b[] = "ȫ�浿";
	int c = 2021;
	int d = 02;
	int e = 23;
	float f1 = 3.14;

	printf("������ ���� : %s\n", a);
	printf("���α׷� �ۼ��� : %s\n", b);
	printf("���α׷� �ۼ��� : %d.%02d.%d", c, d, e);
	printf("\n%.2f", f1);
}