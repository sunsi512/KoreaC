#define _CRT_SECURE_NO_WARNINGS
// define 설정값 조정
#include <stdio.h>


int main2() {
	//int num;

	//while (1) {
	//	printf("-1 입력시 종료 :");
	//	scanf("%d", &num);
	//	if (num == -1)
	//		break;
	//}

	//int num1;
	//for (num1 = 1; num <= 5; num1++) {
	//	if (num == 3)
	//		continue;
	//	printf("%d\n", num1);
	//}

	char ascii1 = '\0';
	if (ascii1 == 0) {
		printf("널문자는 0과 같습니다\n\n");
	}


	char ascii2 = 'a';
	printf("소문자 a는 %d과 같습니다. \n", ascii2);

	char ascii3 = 'A';
	printf("대문자 A는 %d과 같습니다. \n", ascii3);
	if (ascii2 == 97) {
		printf("a\n");
	}

	// 대문자 : 65 ~ 90
	// 소문자 : 97~ 122

	// 무한반복으로 입력을 받되 대문자 범위 안에있으면 종료
	// 소문자 범위 안에있으면 출력

	char asc = '\0';
	while (1) {
		printf("입력하세요 >>> ");
		scanf("%c", &asc);
		if (65 <= asc && asc <= 90) {
			printf("%c 입력했습니다, 종료합니다.\n", asc);
			break;
		}
		else if (97 <= asc && asc <= 122) {
			printf("%c 입력했습니다.\n", asc);
			rewind(stdin);
		}
	}

	return 0;
}