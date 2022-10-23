#include <stdio.h>
#include <stdlib.h>

// 212p
int outer = 10;		// ��������

int main1() {
	int inner = 3;	// ��������
	static int s_inner = 5;		// static����
	inner++;
	printf("%d\n", inner);
	inner++;

	// 275p
	// malloc : �޸𸮸� �����Ҵ�
	// ������ ȭ���� �׸������� ū �۾��� �ʿ��ϸ� �����Ҵ� �ʿ��� �� ����
	// �����Ҵ� : ����ڰ� �޸� ũ�⸦ �ʿ��Ҷ� ��������ũ �ְ� �ʿ������ �������� ����
	char* str;
	str = (char*)malloc(sizeof(char)*10);		// char 10ĭ�� �Ҵ�
	str = "hello";

	printf("%s, %d", str, sizeof(str));
	free(str);			// �����Ҵ��� �ϸ� �ʿ�������� �� free�� ����!

	int* iptr = (int*)malloc(sizeof(int) * 5);
	double* dptr = (double*)malloc(sizeof(double) * 3);
	int i;

	for ( i = 0; i < 5; i++)
	{
		iptr[i] = 10 * (i + 1);
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d", iptr[i]);
	}
	printf("\n");
	
	dptr[0] = 3.14; dptr[1] = 4.31; dptr[2] = 1.43;
	printf("%g%g%g\n", dptr[0], dptr[1], dptr[2]);

	if (iptr != NULL)free(iptr);
	if (dptr != NULL)free(dptr);

	return 0;
}

/*
========��ǻ�� �޸� ����=========
	�ڵ� ����(Code) : �ڵ带 ����
	������ ����(Data) : ��������/static���� ����
	�� ����(Heap) : �������� �Ҵ�� ���� ����
	���� ����(Stack) : ��������/�Ű����� ����

	���� ������ ���� ������ Ȥ�� �� ������ ������ �۱� ������ �����ϸ� ���������� ���
	��������/�Ű����� : �Լ����� ��������� �� �Լ��� ����Ǹ� �����Ǵ� ����
	����/static/���� ���� : �Լ��� ������ �������(�޸𸮴� ������ �� ����, ���α׷� �ӵ��� ������ ������
*/