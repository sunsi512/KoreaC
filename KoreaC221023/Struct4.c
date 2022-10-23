#include <stdio.h>

//typedef struct {
//	int x; int y;
//}POINT;

typedef struct
{
	char name[30];
	int age;
	double height;
}PERSON_;

struct person {
	char name[30];
	int age;
};
typedef struct person PERSON;

struct worker {
	char name[40];
	char phonum[60];
	int salary;
}WORKER;

int main() {

	PERSON_ person = { "손오공", 30, 180.35 };
	PERSON_* ptr = &person;

	printf("이름 : %s\n", ptr->name);
	printf("나이 : %d\n", ptr->age);
	printf("신장 : %f\n", ptr->height);		// 구조체포인터 옆에는 -> 사용

	//POINT position = { 30,60 };
	//PERSON saram = { "강사람", 10 };
	//printf("%d %d\n", position.x, position.y);
	//printf("%s %d\n", saram.name, saram.age);


	return 0;
}