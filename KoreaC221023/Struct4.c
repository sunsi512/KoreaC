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

	PERSON_ person = { "�տ���", 30, 180.35 };
	PERSON_* ptr = &person;

	printf("�̸� : %s\n", ptr->name);
	printf("���� : %d\n", ptr->age);
	printf("���� : %f\n", ptr->height);		// ����ü������ ������ -> ���

	//POINT position = { 30,60 };
	//PERSON saram = { "�����", 10 };
	//printf("%d %d\n", position.x, position.y);
	//printf("%s %d\n", saram.name, saram.age);


	return 0;
}