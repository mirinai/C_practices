#include <stdio.h>

typedef struct {
	int s_id;
	int age;

}Student;

Student setStudent(int s_id, int age) {
	Student s = { s_id,age };
	return s;
}

void printStudent(Student s) {
	printf("number : %d, age : %d\n", s.s_id, s.age);
}


void setStudent1(Student* s, int s_id, int age) {
	s->age = age;
	s->s_id = s_id;
}
int main_2(void) {


	Student s = setStudent(20201212, 10);///Student Ÿ������ ���� �װ� Student Ÿ�� ������ ����
	printStudent(s);//����
	//number : 20201212, age : 10

	Student s1;
	setStudent1(&s1, 123123, 20);//�޸��ּҰ����� �ֱ�
	printStudent(s1);
	//number : 123123, age : 20

	return 0;
}