#include <stdio.h>

// �ڱ��ڽ��� ����ϴ� �Լ� (����Լ�)
int CallSelf1(int count) {
	//printf("CallSelf ���\n");		// 5��
	//CallSelf1();		// �ڱ��ڽ��� ���

	printf("CallSelf ���\n");
	if (count != 5) {
		CallSelf1(count + 1);
	}
}

void sayHello(int count) {
	printf("Hello!\n");
	if (count != 3) {
		sayHello(count + 1);
	}
}

int main3 () {
	CallSelf1(1);
	sayHello(1);
}