#include <stdio.h>

int main1() {
	// 포인터 : 주소를 기억하는 자료형
	// 변수 : 값을 기억

	// 컴퓨터 -> 변수1 -> 변수1의 주소

	// 변수는 값을 저장
	int num = 3;
	printf("%d \n", num);

	// 포인터는 주소를 저장
	int* p_num = &num;			// 앞에 & 기호를 붙이면 주소값으로 변경

	printf("%d \n", p_num);
	printf("%d \n", &num);		// & 참조 (주소값)
	printf("%d \n", *p_num);	// 역참조 (주소로 찾아가서 안에 들어있는 값을 확인

	// 자료형 앞에 *를 붙이면 포인터변수 생성을 의미
	// 이미 생성된 변수명 앞에 *를 붙이면 역참조를 의미 (*애스터리스크)
	// 변수명 앞에 &를 붙이면 주소참조를 의미 (&엠퍼센드)

	printf("결과는 %d\n", (*p_num) + 2);	// *p_num == num
	(*p_num) += 4;		// num = 3 + 4

	// 163p
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	// 166
	num = 10;
	int* pnum;
	pnum = &num;

	*pnum = 20;
	printf("num : %d\n", num);
	(*pnum)++; (*pnum)++;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);

	// 168
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d\n", a);
	*p = 50;
	printf("%d\n", a);

	// 169
	int* ptr;
	int num1 = 5;
	int num2 = 8;

	ptr = &num1;
	printf("%d\n", *ptr);

	ptr = &num2;
	printf("%d\n", *ptr);

	// 170
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;

	int* ptr3 = &n2;
	ptr2 = &n1;
	ptr1 = &n2;

	printf("%d %d\n", *ptr1, *ptr2);

	return 0;
}