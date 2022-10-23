#include <stdio.h>

int getDiffByValue(int num1, int num2) {
	return num1 - num2 ;
}
void callDiffByRefk(int* num1, int* num2) {
	int bk = 0;
	if (*num1 > *num2) {
		bk = *num1;
		*num1 = *num2;
		*num2 = bk;
	}
}

int recursiveSum(int n) {
	static int total = 0;
	total += n;
	if (n != 0) {
		recursiveSum(n - 1);
	}

	return total;
}

int main4() {

	int num1 = 2, num2 = 10;
	int result = getDiffByValue(num1, num2);
	callDiffByRefk(&num1, &num2);
	printf("result : %d\n", result);
	printf("num1 : %d, num2 : %d\n", num1, num2);

	int n;
	printf("n을 입력하세요 :");
	scanf_s("%d", &n);
	int result2 = recursiveSum(n);
	printf("1부터 n까지의 합 : %d\n", result2);

	return 0;
}