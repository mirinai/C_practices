#include <stdio.h>

//����ü ������ �Լ��� ���ڷ� ����, �� �Լ��κ��� ��ȯ�� �� ����(�Ϲ� �ڷ����� ����)

typedef struct {
	int s_id;
	int age;
}Student;//��Ʈ��ó ����

//��Ʈ��ó�� ��ȯ�ϴ� �Լ�
Student setStudent(int s_id, int age) {
	Student s = { s_id,age };
	return s;//Student Ÿ������ ��ȯ
}

void setStudent1(Student* s,int s_id, int age) {//Student ����ü �����͸� �Ű������� ����
	s->s_id = s_id;
	s->age = age;

}

//�Ű������� ��Ʈ��ó�� ����
void printfStudent(Student s) {
	s.s_id = 123;
	printf("�й� : %d, ���� : %d\n", s.s_id, s.age);

}


int main_5(void) {

	Student s1;
	setStudent1(&s1, 20231212, 10);//
	printfStudent(s1);


	printf("\n");
	printf("------------------------------\n");
	printf("\n");

	Student s = setStudent(20231212, 10);//return�ؼ� ���� s�� �޾� ����ü�� �����
	printfStudent(s);
	printf("main : Student : %d\n", s.s_id);//���� �Լ��� ����



	return 0;
}