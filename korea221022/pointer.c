#include <stdio.h>

int main1() {
	// 716p
	short sarr[3] = { 1,2,3 };
	int iarr[3] = { 10, 20, 30 };

	// �ε��� ��ȣ�� ���� ����
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);

	// ������ ������ ���� ����
	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2));
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));

	// �ּ� Ȯ��
	printf("%d %d %d\n", &sarr[0], &sarr[1], &sarr[2]);
	printf("%d %d %d\n", &iarr[0], &iarr[1], &iarr[2]);

	char str1[] = "Hello";			// �ڵ����� str1�� 6ĭ�� �ο�
	char str2[10] = "Hello";		// str2�� 10ĭ
	char str3 = "Hello";			// str1�� ���������� str3�� 6ĭ�� �ο�

	str1[0] = "h";		// �� (�迭�� ���� ���ڿ��� ĭ���� ���� ����)
	printf("% s\n",str1);
	//str3[0] = "h";		// ����ȵ� (�����ͷ� ���� ���ڿ��� ĭ���� ���� �Ұ���)
	//printf("% s\n",str3);

	/*str1 = "bye";*/		// ���� (�迭�� ���� ���ڿ��� ���ڿ��� ������ �� ����)		// ���� �����Ϸ��� strcpy��� �Լ��� ���
	str3 = "bye";		// �� (�����ͷ� ���� ���ڿ��� ������ ����)

	return 0;
}