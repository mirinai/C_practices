#include <stdio.h>
//1. ����ü	Point�� ����(int �� ����ü ���� 2��)�ϰ�, main�Լ����� �� ���� ��ǥ�� �ʱ�ȭ�ϰ� ����ϴ� ���α׷� �ۼ�
struct Point {
	int garo;
	int sero;
};




// 2. ����ü Student(char[50], int ���� 1���� ���)�� �����ϰ�, main�Լ����� �θ��� �л������� �ʱ�ȭ�ϰ� ����ϴ� ���α׷� �����
struct Student {
	char name[50];
	int age;
};


//3. ����ü Rectangle(int�� �ΰ� ���)�� �����ϰ�, main�Լ����� �� ���簢���� �ʺ�� ���̸� �ʱ�ȭ
// �� ������ ����ü���� ���� �����ͼ� ���簢���� ���̸� ���ϰ� ���̸� �����ϴ� �Լ� �����
//�׸��� �� ���� ���
int Area(int w,int h) {
	return w * h;

}
int main_3(void) {


	struct Rectangle {
		int width;
		int height;
	};

	//1. ����ü	Point�� ����(int �� ����ü ���� 2��)�ϰ�, main�Լ����� �� ���� ��ǥ�� �ʱ�ȭ�ϰ� ����ϴ� ���α׷� �ۼ�
	struct Point coordinate1 = { 45,75 };
	struct Point coordinate2 = { 20,80 };
	printf("coordinate1�� ��ǥ : ���� :%d, ���� : %d\n", coordinate1.garo, coordinate1.sero);
	printf("coordinate2�� ��ǥ : ���� :%d, ���� : %d\n", coordinate2.garo, coordinate2.sero);

	printf("\n");
	printf("------------------------------\n");
	printf("\n");

	//2. ����ü Student(char[50], int ���� 1���� ���)�� �����ϰ�, main�Լ����� �θ��� �л������� �ʱ�ȭ�ϰ� ����ϴ� ���α׷� �����
	struct Student student1 = {
		.name = "eren",
		.age = 19,

	};
	struct Student student2 = { "mikasa",18 };
	printf("student1�� �̸� : %s, ���� : %d\n",student1.name,student1.age);
	printf("student2�� �̸� : %s, ���� : %d\n",student2.name,student2.age);

	printf("\n");
	printf("------------------------------\n");
	printf("\n");

	//3. ����ü Rectangle(int�� �ΰ� ���)�� �����ϰ�, main�Լ����� �� ���簢���� �ʺ�� ���̸� �ʱ�ȭ
	// �� ������ ����ü���� ���� �����ͼ� ���簢���� ���̸� ���ϰ� ���̸� �����ϴ� �Լ� �����
	//�׸��� �� ���� ���
	struct Rectangle rectangle1 = {
		.width = 20,
		.height = 40,
	};
	struct Rectangle rectangle2 = {
		.width = 60,
		.height = 20,
	};
	//printf("rectangle1�� �ʺ� : %d, ���� : %d\n",rectangle1.width,rectangle1.height);
	//printf("rectangle2�� �ʺ� : %d, ���� : %d\n",rectangle2.width,rectangle2.height);
	printf("rectangle1�� ���� : %d\n", Area(rectangle1.width, rectangle1.height));
	printf("rectangle2�� ���� : %d\n", Area(rectangle2.width,rectangle2.height));

	printf("\n");
	printf("------------------------------\n");
	printf("\n");



	return 0;
}