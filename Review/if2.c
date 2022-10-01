#include <stdio.h>

void main4() {
	// 홀수면 홀수 
	// 짝수면 짝수
	/*int num = 0;*/

	// 조건문 if(){}
	// 소괄호 안에 내용이 맞으면 {}을 실행하고
	// 소괄호 안에 내용이 틀리면 0를 무시한다
	// () 안에는 조건을 적고, {} 안에는 조건이 맞을때만 실행할 코드를 적는다
	//if (num %2 == 0){
	//	printf("짝수\n");
	//}

	//// num %2 == 1이 맞으면
	//if (num % 2 == 1) {
	//	// 실행
	//	printf("홀수\n");
	//}

	//int num = 3;

	//if (num < 3) {
	//	printf("num is smaller than 3!");
	//}
	//if (num == 3) {
	//	printf("num is 3!");
	//}
	//if (num > 3) {
	//	printf("num is bigger than 3!");
	//}

	int age = 22;
	//if (age >= 20) {
	//	printf("성인");
	//}
	//else {
	//	printf("미성년자");
	//}

	if (age < 10) {
		printf("어린이");
	}
	else if (age < 20) {
		// if가 틀리면 그 다음 검사할 if
		// 위에 if가 맞았다면 무시됨
		printf("10대");
	}
	else if (age < 30) {
	// if가 틀리면 그 다음 검사할 if
	// 위에 if가 맞았다면 무시됨
		printf("20대");
	}
	else {
		// if와 else if 모두 틀리면 실행
		printf("기타등등");
	}
}