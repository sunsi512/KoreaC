#include <stdio.h>

void main10() {
	// type : �ڷ���
	// �ڷ��� : char, int, float, ...
	
	// �ڷ����� �� ������ϳ�> 
	// 1. �������� �Ǽ��� �����Ϸ�(Visual Studio)�� �ν��ؼ� �����ϱ� ����
	// 2. �������� �ǵ��� ��Ȯȭ

	printf("12-3");			// ��ǻ�ʹ� 9�� ������� 12-3���� ������� �˼��� ����

	char phone[] = "010-2222-3333";		// ���ڿ�[] - 1ĭ*�����������ڰ���+1
	char aa = 'a';					// ���� - 1ĭ

	short num3 = 12;					// 2ĭ¥�� ����
	int num = 123;						// ����(����) - 4ĭ
	long num33 = 12;					// 8ĭ¥�� ����(����)

	float num2 = 3.14f;					// �Ҽ����ִ� ���� (�Ǽ�) - 8ĭ
	double num22 = 3.14;				// 8ĭ �Ҽ����ִ� ����(�Ǽ�)

	printf("%d", num);
	printf("%d\n",(int)sizeof(aa));
	printf("%d\n", (int)sizeof(num));
	printf("%d\n", (int)sizeof(num2));
	printf("%d\n", (int)sizeof(phone));

	printf("%d\n", (int)sizeof(int));
	printf("%d\n", (int)sizeof(char));
	printf("%d\n", (int)sizeof(short));
	printf("%d\n", (int)sizeof(50));
	printf("%d\n", (int)sizeof(float));
	printf("%d\n", (int)sizeof(3.14f));

	// �Ҽ��� �ִ� ���� �ڿ� f�� ���̸� float - 4ĭ
	// �Ҽ��� �ִ� ���� �ڿ� �ƹ��͵� �Ⱥ��̸� double - 8ĭ

	// p 45
	float f = 3.14f;			// ���߻�!
	int number = 3;

	// �ڷ��� ��ȯ : ������ ���¸� �ٲ�
	// ���� -> �Ҽ����ִ¼���
	// ���� -> ����
	// �Ҽ����ִ¼��� -> �Ҽ������¼���

	// �ڷ����� �ٲٴ� ��� : �����տ� �Ұ�ȣ�� ���� ���ϴ� �ڷ����� ���´�. 
	printf("%d\n",(int)f);
	printf("%f\n", (float)number);
}