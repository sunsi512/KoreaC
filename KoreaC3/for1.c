#include <stdio.h>

int main4() {
	// �ݺ��� : while, for

	int flag = 0;		// ������
	while (flag < 3) {		// 3�� �ݺ�
		printf("%d��", flag);
		printf("\n");

		flag++;			// ������ ���� (���ѹݺ��� ���ϱ� ����)
	}

	// while : ������ ���� ���������ϰ�, �������� ������������ϰ� ==> �߱�����
	// for : ������ ���õ� ���� �� ���� ���ĵ���!

	for (int plat = 0; plat < 3; plat++) {
		printf("%d��", plat);
		printf("\n");
	}
	/*
	for(�ʱⰪ;���ǽ�;������){
		�ݺ��� ����;
	}
	*/

	int i;
	for (i = 0; i < 3; i += 1) {
		if (i < 2) {
			printf("===");
		}
		printf("i is %d now\n", i);
	}

	int j;
	for (j = 1; j <= 10; j++)
	{
		if (j % 2 == 0) {
			printf("%d\n", j);
		}
	}

	int k;
	for (k = 1; k <= 100; k++)
	{
		if (k % 6 == 0) {
			printf("%d\n", k);
		}
	}

	return 0;
}