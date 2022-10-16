#include <stdio.h>

int main1() {
	// ������ : �ּҸ� ����ϴ� �ڷ���
	// ���� : ���� ���

	// ��ǻ�� -> ����1 -> ����1�� �ּ�

	// ������ ���� ����
	int num = 3;
	printf("%d \n", num);

	// �����ʹ� �ּҸ� ����
	int* p_num = &num;			// �տ� & ��ȣ�� ���̸� �ּҰ����� ����

	printf("%d \n", p_num);
	printf("%d \n", &num);		// & ���� (�ּҰ�)
	printf("%d \n", *p_num);	// ������ (�ּҷ� ã�ư��� �ȿ� ����ִ� ���� Ȯ��

	// �ڷ��� �տ� *�� ���̸� �����ͺ��� ������ �ǹ�
	// �̹� ������ ������ �տ� *�� ���̸� �������� �ǹ� (*�ֽ��͸���ũ)
	// ������ �տ� &�� ���̸� �ּ������� �ǹ� (&���ۼ���)

	printf("����� %d\n", (*p_num) + 2);	// *p_num == num
	(*p_num) += 4;		// num = 3 + 4

	// 163p
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	// 166
	num = 10;
	int* pnum;
	pnum = &num;

	*pnum = 20;
	printf("num : %d\n", num);
	(*pnum)++; (*pnum)++;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);

	// 168
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d\n", a);
	*p = 50;
	printf("%d\n", a);

	// 169
	int* ptr;
	int num1 = 5;
	int num2 = 8;

	ptr = &num1;
	printf("%d\n", *ptr);

	ptr = &num2;
	printf("%d\n", *ptr);

	// 170
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;

	int* ptr3 = &n2;
	ptr2 = &n1;
	ptr1 = &n2;

	printf("%d %d\n", *ptr1, *ptr2);

	return 0;
}