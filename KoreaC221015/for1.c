#include <stdio.h>

int main1() {
	// while�� 3�� �ݺ��ϱ�
	int num1 = 0;
	while (num1 < 3) {
		printf("while [%d] \n", num1);
		num1++;
	}

	// for�� 3�� �ݺ��ϱ�
	for (int num2 = 0; num2 < 3; num2++) {
		printf("for [%d] \n", num2);
	}

	// while �Ǵ� for�� ����� �� �ִ� ����
	// 1. break;
	// 2. continue;
	for (int num3 = 0; num3 < 3; num3++) {
		break;			// �ڽ��� ���ΰ� �ִ� �ݺ����� ����
		printf("break [%d]\n", num3);
	}

	for (num1 = 0; num1 < 3; num1++) {
		continue;		// continue�� ������ ���� �ؿ��κ� �����ϰ� ���� �� ���ǰ˻��ϴ� �κ� ()�� �ö�
		printf("contunue [%d]\n", num1);
	}

	for (num1 = 0; num1 < 3; num1++) {
		if (num1 == 1) {
			continue;		// �ؿ� �κ� �����ϰ� ���� �ö�

		}
		printf("continue +if [%d]\n", num1);
	}

	for (num1 = 0; num1 < 5; num1++) {
		if (num1 == 1) {
			break;			// �ݺ��� ���� ����

		}
		printf("break + if [%d]\n", num1);
	}
	
	for (num1 = 0; num1 < 3; num1++) {
		if (num1 == 2) {
			printf("���ڴ� 2\n");			// �ݺ��� ���� ����

		}
		printf("�ݺ��� ���� ��!\n");
	}
		
	for (num1 = 0; num1 < 3; num1++) {
		for (int num4 = 0; num4 < 3; num4++) {
			printf("�ݺ��� �ȿ��� ������ [%d]\n", num4);
		}
		printf("===========�ݺ��� �ٱ��� ������========== [%d]\n", num1);
	}

	



	return 0;
}