#include <stdio.h>
//person����ü ����// main�ȿ� �ᵵ ��
struct person {
	char name[20];
	int age;
	float height;

};

int main_2(void) {
	//����ü : �������� ������ ��� ���ο� Ÿ���� ����� ���
	// ->����� ���� �ڷ��� �̶�� ���� ��

	// c��� ����ü ���� �ڵ带 ���� �Ǹ�?

	/*char person1Name[20] = "john";
	int person1Age = 25;
	float person1Height = 175.5;

	printf("�̸� : %s, ���� : %d, Ű : %.2f\n", person1Name, person1Age, person1Height);
	char person2Name[20] = "sohn";
	int person2Age = 25;
	float person2Height = 175.5;*/

	// ����� ������ �����ϴ� ����ü �����
	// ����ü�� ������� struct��� Ű���带 �����������

	/*
		struct ����ü�̸�{

		���� ���� // -> ����ü �ȿ� �ִ� ������ ���������� �θ�

	}
	*/

	//����ü (���� ����) �� �ʱ�ȭ
	struct person person1 = { "john",25,175.5 };
	printf("�̸� : %s, ���� : %d, Ű : %.2f\n", person1.name, person1.age, person1.height);

	person1.age = 10;//���1->����ü ->����->�ʱ�ȭ
	printf("���� : %d\n\n", person1.age);

	struct person person2 = {
		.name = "edward",
		.age = 15,
		.height = 160.5
	};
	printf("�̸� : %s, ���� : %d, Ű : %.2f\n", person2.name, person2.age, person2.height);

	return 0;
}