#define _CRT_SECURE_NO_WARNINGS
// define ������ ����
#include <stdio.h>


int main2() {
	//int num;

	//while (1) {
	//	printf("-1 �Է½� ���� :");
	//	scanf("%d", &num);
	//	if (num == -1)
	//		break;
	//}

	//int num1;
	//for (num1 = 1; num <= 5; num1++) {
	//	if (num == 3)
	//		continue;
	//	printf("%d\n", num1);
	//}

	char ascii1 = '\0';
	if (ascii1 == 0) {
		printf("�ι��ڴ� 0�� �����ϴ�\n\n");
	}


	char ascii2 = 'a';
	printf("�ҹ��� a�� %d�� �����ϴ�. \n", ascii2);

	char ascii3 = 'A';
	printf("�빮�� A�� %d�� �����ϴ�. \n", ascii3);
	if (ascii2 == 97) {
		printf("a\n");
	}

	// �빮�� : 65 ~ 90
	// �ҹ��� : 97~ 122

	// ���ѹݺ����� �Է��� �޵� �빮�� ���� �ȿ������� ����
	// �ҹ��� ���� �ȿ������� ���

	char asc = '\0';
	while (1) {
		printf("�Է��ϼ��� >>> ");
		scanf("%c", &asc);
		if (65 <= asc && asc <= 90) {
			printf("%c �Է��߽��ϴ�, �����մϴ�.\n", asc);
			break;
		}
		else if (97 <= asc && asc <= 122) {
			printf("%c �Է��߽��ϴ�.\n", asc);
			rewind(stdin);
		}
	}

	return 0;
}