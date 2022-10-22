#include <stdio.h>

int main6() {
	int i, j;
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr[i][j] = 10;
		}
	}

	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 3;j++)
		{
			printf("%d", arr[i][j]);
		}
	}printf("\n");

	int array2[2][3] = {
		{1,2,3},		// [0][0] ~ [0][2]
		{4,5,6}			// [1][0] ~ [1][2]
	};

	// 포인터 배열
	// 배열은 값을 담기도 하지만 주소도 담을 수 있다
	//int(*p_array2)[3] = array2;		// 2차원배열
	//int p_array[][3] = p_array2;

	char* str1 = "hello";
	char str2[] = "hello";
	char str3[6] = "hello";

	// 191p
	 int _arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	 i, j;

	int(*arrptr)[3] = _arr;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d", arrptr[i][j]);
		}
		printf("\n");
	}

	char bingo[3][3];

	bingo[0][0] = 'O';
	bingo[0][1] = 'X';

	bingo[2][1] = 'X';
	bingo[2][2] = 'O';


	i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j) {
				bingo[i][j] = 'O';
			}
			else {
				bingo[i][j] = 'X';
			}
		}
	}

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("%c", bingo[i][j]);
		}
		printf("\n");
	}

	

	return 0;
}