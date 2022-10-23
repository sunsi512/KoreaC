//#include <stdio.h>
//#include <string.h>
//
//typedef unsigned int UINT;		// unsigned : 마이너스 값이 없는
//
//typedef struct Person {
//	char name[30];
//	int age;
//
//}per;		// struct Person == per
//
//struct person {
//	char name[30];
//	int age;
//};
//
//int main() {
//	// 285p
//	struct person boy[3] = {
//		{"김소년", 12},
//		{"유소년", 14},
//		{"청소년", 16}
//	};
//
//	struct Person girl[3];
//	strcpy(girl[0].name, "이소녀");
//	strcpy(girl[1].name, "오소녀");
//	strcpy(girl[2].name, "하소녀");
//	girl[0].age = 9;
//	girl[1].age = 13;
//	girl[2].age = 7;
//	
//	for ( i = 0; i < 3; i++)
//	{
//		printf("소년의 이름은 %s, 나이는 %d세\n", boy.name, boy.age);
//		printf("소녀의 이름은 %s, 나이는 %d세\n", girl.name, girl.age);
//	}
//
//	return 0;
//}