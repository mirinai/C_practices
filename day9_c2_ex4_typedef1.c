#include <stdio.h>

//typedef : ������ �ִ� �ڷ����� ���̸��� �ο��ϴ� ����
typedef int INTERGER;
typedef char CHAR;
typedef int* PINT;

//struct point {
	//int x;
	//int y;
//};
//����ü�� ����ڰ� ���� �ڷ����̱⶧���� ����ü�� �̸��� typedef�� �ٲܼ�����
//typedef struct point POINT;
 
typedef struct {
	int x;
	int y;

} POINT;

typedef struct {
	char* name;
	int age;
}Person;

int main_4(void) {
	INTERGER num1 = 3;
	PINT ptr1 = &num1;
	CHAR ch = 'c';

	//��Ʈ��ó �������  �ʱ�ȭ
	//struct point p1 = {30, 60};

	//typedef�� �̷��� ��
	POINT p1 = { 20,30 };
	POINT p2 = { 40,70 };

	printf("\n");
	printf("------------------------------\n");
	printf("\n");

	//���� �����Ϳ� ����ߴ� ���
	int num2;
	int* nump = &num2;
	//typedef�� �� ��Ʈ��ó�� ������ ���
	Person boy;
	Person* personp = &boy;

	(*personp).age = 10;//����ü �����Ϳ� ���� �ֱ�
	printf("%d\n", (*personp).age);
	//�� �Ʒ� ���� ���� �� ����
	personp->age = 20;//����ü �����Ϳ� ���� �����ֱ�
	personp->name = "carl";

	printf("%s, %d\n",(*personp).name, (*personp).age);
	printf("%s, %d\n", personp->name, personp->age);

	return 0;
}