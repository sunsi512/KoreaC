#include <stdio.h>

void main5() {
	// 45p

	char a[] = "변수와 자료형";
	char b[] = "홍길동";
	int c = 2021;
	int d = 02;
	int e = 23;
	float f1 = 3.14;

	printf("오늘의 주제 : %s\n", a);
	printf("프로그램 작성자 : %s\n", b);
	printf("프로그램 작성일 : %d.%02d.%d", c, d, e);
	printf("\n%.2f", f1);
}