#include <stdio.h>

void main4() {
	// Ȧ���� Ȧ�� 
	// ¦���� ¦��
	/*int num = 0;*/

	// ���ǹ� if(){}
	// �Ұ�ȣ �ȿ� ������ ������ {}�� �����ϰ�
	// �Ұ�ȣ �ȿ� ������ Ʋ���� 0�� �����Ѵ�
	// () �ȿ��� ������ ����, {} �ȿ��� ������ �������� ������ �ڵ带 ���´�
	//if (num %2 == 0){
	//	printf("¦��\n");
	//}

	//// num %2 == 1�� ������
	//if (num % 2 == 1) {
	//	// ����
	//	printf("Ȧ��\n");
	//}

	//int num = 3;

	//if (num < 3) {
	//	printf("num is smaller than 3!");
	//}
	//if (num == 3) {
	//	printf("num is 3!");
	//}
	//if (num > 3) {
	//	printf("num is bigger than 3!");
	//}

	int age = 22;
	//if (age >= 20) {
	//	printf("����");
	//}
	//else {
	//	printf("�̼�����");
	//}

	if (age < 10) {
		printf("���");
	}
	else if (age < 20) {
		// if�� Ʋ���� �� ���� �˻��� if
		// ���� if�� �¾Ҵٸ� ���õ�
		printf("10��");
	}
	else if (age < 30) {
	// if�� Ʋ���� �� ���� �˻��� if
	// ���� if�� �¾Ҵٸ� ���õ�
		printf("20��");
	}
	else {
		// if�� else if ��� Ʋ���� ����
		printf("��Ÿ���");
	}
}