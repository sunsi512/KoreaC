#include <stdio.h>

void main10() {
	// type : 자료형
	// 자료형 : char, int, float, ...
	
	// 자료형으 왜 써줘야하나> 
	// 1. 개발자의 실수를 컴파일러(Visual Studio)가 인식해서 방지하기 위해
	// 2. 개발자의 의도를 명확화

	printf("12-3");			// 컴퓨터는 9로 줘야할지 12-3으로 줘야할지 알수가 없음

	char phone[] = "010-2222-3333";		// 문자열[] - 1칸*내가적은문자갯수+1
	char aa = 'a';					// 문자 - 1칸

	short num3 = 12;					// 2칸짜리 숫자
	int num = 123;						// 숫자(정수) - 4칸
	long num33 = 12;					// 8칸짜리 숫자(정수)

	float num2 = 3.14f;					// 소숫점있는 숫자 (실수) - 8칸
	double num22 = 3.14;				// 8칸 소수점있는 숫자(실수)

	printf("%d", num);
	printf("%d\n",(int)sizeof(aa));
	printf("%d\n", (int)sizeof(num));
	printf("%d\n", (int)sizeof(num2));
	printf("%d\n", (int)sizeof(phone));

	printf("%d\n", (int)sizeof(int));
	printf("%d\n", (int)sizeof(char));
	printf("%d\n", (int)sizeof(short));
	printf("%d\n", (int)sizeof(50));
	printf("%d\n", (int)sizeof(float));
	printf("%d\n", (int)sizeof(3.14f));

	// 소수점 있는 숫자 뒤에 f를 붙이면 float - 4칸
	// 소수점 있는 숫자 뒤에 아무것도 안붙이면 double - 8칸

	// p 45
	float f = 3.14f;			// 경고발생!
	int number = 3;

	// 자료형 변환 : 공간의 형태를 바꿈
	// 숫자 -> 소수점있는숫자
	// 숫자 -> 문자
	// 소수점있는숫자 -> 소수점없는숫자

	// 자료형을 바꾸는 방법 : 변수앞에 소괄호를 열고 원하는 자료형을 적는다. 
	printf("%d\n",(int)f);
	printf("%f\n", (float)number);
}