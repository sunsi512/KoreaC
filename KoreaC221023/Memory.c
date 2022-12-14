#include <stdio.h>
#include <stdlib.h>

// 212p
int outer = 10;		// 전역변수

int main1() {
	int inner = 3;	// 지역변수
	static int s_inner = 5;		// static변수
	inner++;
	printf("%d\n", inner);
	inner++;

	// 275p
	// malloc : 메모리를 동적할당
	// 가끔씩 화면을 그리기위해 큰 작업이 필요하면 동정할당 필요할 수 있음
	// 동적할당 : 사용자가 메모리 크기를 필요할때 일정량만크 주고 필요없을때 수동으로 삭제
	char* str;
	str = (char*)malloc(sizeof(char)*10);		// char 10칸을 할당
	str = "hello";

	printf("%s, %d", str, sizeof(str));
	free(str);			// 동적할당을 하면 필요없어질때 꼭 free로 해제!

	int* iptr = (int*)malloc(sizeof(int) * 5);
	double* dptr = (double*)malloc(sizeof(double) * 3);
	int i;

	for ( i = 0; i < 5; i++)
	{
		iptr[i] = 10 * (i + 1);
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d", iptr[i]);
	}
	printf("\n");
	
	dptr[0] = 3.14; dptr[1] = 4.31; dptr[2] = 1.43;
	printf("%g%g%g\n", dptr[0], dptr[1], dptr[2]);

	if (iptr != NULL)free(iptr);
	if (dptr != NULL)free(dptr);

	return 0;
}

/*
========컴퓨터 메모리 구조=========
	코드 영역(Code) : 코드를 저장
	데이터 영역(Data) : 전역변수/static변수 저장
	힙 영역(Heap) : 동적으로 할당된 변수 저장
	스택 영역(Stack) : 지역변수/매개변수 저장

	스택 영역에 비해 데이터 혹은 힙 영역은 공간이 작기 때문에 가능하면 지역변수를 사용
	지역변수/매개변수 : 함수에서 만들어지고 그 함수가 종료되면 삭제되는 공간
	전역/static/동적 변수 : 함수가 끝나도 살아있음(메모리는 낭비할 수 있음, 프로그램 속도가 현저히 느려짐
*/