#include <stdio.h>

int main4() {
	// 반복문 : while, for

	int flag = 0;		// 기준점
	while (flag < 3) {		// 3번 반복
		printf("%d번", flag);
		printf("\n");

		flag++;			// 기준점 변경 (무한반복을 피하기 위해)
	}

	// while : 변수도 따로 만들어줘야하고, 기준점도 증감시켜줘야하고 ==> 중구난방
	// for : 기준점 관련된 것은 한 곳에 뭉쳐두자!

	for (int plat = 0; plat < 3; plat++) {
		printf("%d번", plat);
		printf("\n");
	}
	/*
	for(초기값;조건식;증감량){
		반복할 내용;
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