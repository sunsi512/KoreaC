//#include <stdio.h>
//#include <string.h>
//
//typedef unsigned int UINT;		// unsigned : ���̳ʽ� ���� ����
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
//		{"��ҳ�", 12},
//		{"���ҳ�", 14},
//		{"û�ҳ�", 16}
//	};
//
//	struct Person girl[3];
//	strcpy(girl[0].name, "�̼ҳ�");
//	strcpy(girl[1].name, "���ҳ�");
//	strcpy(girl[2].name, "�ϼҳ�");
//	girl[0].age = 9;
//	girl[1].age = 13;
//	girl[2].age = 7;
//	
//	for ( i = 0; i < 3; i++)
//	{
//		printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy.name, boy.age);
//		printf("�ҳ��� �̸��� %s, ���̴� %d��\n", girl.name, girl.age);
//	}
//
//	return 0;
//}