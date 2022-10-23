#include <stdio.h>

// 자기자신을 사용하는 함수 (재귀함수)
int CallSelf1(int count) {
	//printf("CallSelf 사용\n");		// 5번
	//CallSelf1();		// 자기자신을 사용

	printf("CallSelf 사용\n");
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