#include <stdio.h>

struct Character		// ����ü : �������� ��Ƴ���
{
	char* name;
	int health;
	int atk;
};


int main5() {
	// �������� ĳ��1 vs ĳ��2
	// ĳ���� : �̸�, ü��, ���ݷ�
	char* c1 = "ĳ��1";
	char* c2 = "ĳ��2";

	// �Ϲݺ��� : ������ �ʹ� ������
	int c1_health = 300;
	int c2_health = 200;

	int c1_atk = 20;
	int c2_atk = 40;

	// �迭 : ����濡 ��� ĳ�������� �޸��س��ƾ���
	char* c[100];
	int c_health[100];
	int c_atk[100];

	c[0] = "ĳ��1";
	c[1] = "ĳ��2";

	// ����ü : �����ڰ� ���� ����� �ڷ���
	int num;
	struct Character ĳ��1 = { "ĳ��1", 300, 20 };
	struct Character ĳ��2 = { "ĳ��2", 200, 40 };

	// ������ �ϳ��� ����, ���ȣ�� ����� �ʿ� ����
	ĳ��1.name;
	ĳ��1.health;
	ĳ��1.atk;

	ĳ��2.name;
	ĳ��2.health;
	ĳ��2.atk;

	printf("ĳ������ %s, ü���� %d, ���ݷ��� %d\n", ĳ��1.name, ĳ��1.health, ĳ��1.atk);
	printf("ĳ������ %s, ü���� %d, ���ݷ��� %d\n", ĳ��2.name, ĳ��2.health, ĳ��2.atk);

	// ���� : �ʹ� ������
	// �迭 : �����ϱ� ����
	// ����ü  ���� ���� ����� ����O

	return 0;
}