//#include <stdio.h>
//
//// 234p
//int number = 0;		// 전역변수
//
//void _printNumber() {
//	printf("전역 변수 number는 %d을 저장하고 있다!\n", number);
//
//	// 함수에 return이 없을 때 함수의 자료형은 void
//	// return; 생략이 된 것
//}
//
//void __staticNumber() {
//	// static 변수 (데이터 영역)
//	static int s_number = 4;		// static변수 (지역에서 생성되나 프로그램이 종료될 때 삭제됨)
//	s_number++;
//	printf("%d\n", s_number);
//}
//
//
////int main(void) {
////	int number = 3;			// 지역변수 (만약 지역변수의 이름이 전역변수와 같으면 지역변수를 우선으로 사용)
////	__printf("지역 변수 number는 %d을 저장하고 있다!\n", number);		// 전역변수가 사용 안되고 지역변수가 사용됨
////	__staticNumber();
////	__staticNumber();
////
////	return 0;
////}