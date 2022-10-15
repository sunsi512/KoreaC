#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main0() {

	// 1. 변수
	// 변수 : 저장공간
	int 숫자변수 = 0;
	float 소수점숫자변수 = 0.0f;
	char 문자변수 = 'a';
	char 문자열변수[100] = "aaaaaaaaaaa";		// 영어와 숫자는 99개까지, 한글은 49개까지 + "\0'
	
	// 2. 자료형
	// 변수에 저장될 값을 미리 표기
	int 숫자1 = 3;
	float 소수점있는숫자2 = 3.14f;

	// 저장된 값의 자료형을 배우고 싶다.
	(int)소수점있는숫자2;		// 3.14 --> 3
	(float)숫자1;				// 3 --> 3.000000

	// 3. 조건문
	// if(){} ~ else if(){} ~ else{}
	if (숫자1 > 2) {
		// 소괄호 안에 내용이 맞을때면(1) 실행할 문장들;
		숫자1 = 2;
		printf("2를 초과할 수 없습니다.\n");
	}
	else if (숫자1 > 0) {
		printf("양수입니다.\n");
	}
	else if (숫자1 == 0) {
		printf("숫자는 0입니다.\n");
	}
	else {
		printf("숫자는 음수입니다.\n");
	}

	// switch(){case/break)
	// if는 소괄호가 맞으면 중괄호를 실행하지만 switch는 값이 일치한 case부터 실행한다. 
	int 숫자2 = 2;
	scanf("%d", &숫자2);		//scanf : 키보드 입력받기
	switch (숫자2) {
	case 0:
		printf("숫자2는 %d입니다.\n", 숫자2);
		break;
	case 1:
		printf("숫자2는 %d입니다.\n", 숫자2);
		break;
	case 2:
		printf("숫자2는 %d입니다.\n", 숫자2);
		break;
	default:
		printf("일치하는 값이 없음\n");
	}

	// 4. 반복문
	// while(){}
	// 동작은 if와 유사하게 하나, 차이점은 {}실행 후 ()검사를 다시함
	// if처럼 소괄호 있으면 {} 실행, 실행 후에는 ()로 돌아감
	int 숫자3 = 3;
	while (숫자3 != 3) {
		// () 내용이 틀릴때까지 계속 실행
		printf("숫자 3은 3이 아닙니다. [%d]\n", 숫자3);
		숫자3++;
	}
	// 5. 입력과 출력

	/*
	무한반복을 하되 숫자를 입력받고 훌력함
	대신, 입력숫자가 0일 경우 반복을 종료
	*/

	int num = 0;
		while (num==num) {
		scanf("%d", &num);
			printf("%d", num);
			if (num == 0) {
				break;
			}
		}

	// for : while을 정리 (간소화)
		for (int 숫자5 = 1; 숫자5 != 0;) {
			printf("숫자를 입력하세요: ");
		
		}

	return 0;
}
