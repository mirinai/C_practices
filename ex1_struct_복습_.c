#include <stdio.h>


//����ü�� ? �������� ������ ��� ���ο� Ÿ���� ����� Ÿ��
				//-> ����� ���� �ڷ���

//c���� ����ü�� ������ ���� struct��� Ű���带 ����Ѵ�.
//����ü �̸��� ��������� �����ؾ� ��

/*
	����ü�� ����

	struct ����ü�̸�{
		������Ÿ�� ��������̸�1;
		������Ÿ�� ��������̸�2;

	}
*/
struct Person1 {
	char name[20];
	int age;
	float height;

};




struct point {
	int x;
	int y;

};

typedef struct point POINT1;

//�� �Ʒ� ���� �ٸ��� �� �� 
typedef struct {
	int x;
	int y;
}POINT2;



typedef struct {
	char* name;
	int age;
}Person2;





int main_1(void) {
	
	struct Person1 person1 = {"john",18,164.8};
	printf("�̸� : %s, ����: %d, Ű : %.2f\n", person1.name, person1.age, person1.height);

	struct Person1 person2 = {//�κ������� �ʱ�ȭ

		.name = "armin",
		.age = 14,
		//Ű�� �ʱ�ȭ ����

	};
	//person1.age = 14; : �� �ٲٱ�


	POINT1 p1 = { 1,2 };
	//���ӻ� ����
	POINT2 p2 = { 1,2 };

	Person2 boy;
	Person2* personp = &boy;

	personp->age = 10;
	personp->name = "charls";

	printf("%s %d\n", personp->name, personp->age);
	//scanf("%d", &personp->age);



	return 0;
}