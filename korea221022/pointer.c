#include <stdio.h>

int main1() {
	// 716p
	short sarr[3] = { 1,2,3 };
	int iarr[3] = { 10, 20, 30 };

	// 인덱스 번호를 통한 접근
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);

	// 포인터 연산을 통한 접근
	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2));
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));

	// 주소 확인
	printf("%d %d %d\n", &sarr[0], &sarr[1], &sarr[2]);
	printf("%d %d %d\n", &iarr[0], &iarr[1], &iarr[2]);

	char str1[] = "Hello";			// 자동으로 str1은 6칸이 부여
	char str2[10] = "Hello";		// str2는 10칸
	char str3 = "Hello";			// str1과 마찬가지로 str3에 6칸을 부여

	str1[0] = "h";		// 됨 (배열로 만든 문자열은 칸별로 수정 가능)
	printf("% s\n",str1);
	//str3[0] = "h";		// 적용안됨 (포인터로 만든 문자열은 칸별로 수정 불가능)
	//printf("% s\n",str3);

	/*str1 = "bye";*/		// 오류 (배열로 만든 문자열은 문자열을 대입할 수 없음)		// 값을 수정하려면 strcpy라는 함수를 사용
	str3 = "bye";		// 됨 (포인터로 만든 문자열은 대입이 가능)

	return 0;
}