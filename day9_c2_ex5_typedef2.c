#include <stdio.h>

//구조체 변수를 함수의 인자로 전달, 또 함수로부터 반환할 수 있음(일반 자료형과 같음)

typedef struct {
	int s_id;
	int age;
}Student;//스트럭처 변수

//스트럭처를 반환하는 함수
Student setStudent(int s_id, int age) {
	Student s = { s_id,age };
	return s;//Student 타입으로 반환
}

void setStudent1(Student* s,int s_id, int age) {//Student 구조체 포인터를 매개변수로 받음
	s->s_id = s_id;
	s->age = age;

}

//매개변수를 스트럭처로 선언
void printfStudent(Student s) {
	s.s_id = 123;
	printf("학번 : %d, 나이 : %d\n", s.s_id, s.age);

}


int main_5(void) {

	Student s1;
	setStudent1(&s1, 20231212, 10);//
	printfStudent(s1);


	printf("\n");
	printf("------------------------------\n");
	printf("\n");

	Student s = setStudent(20231212, 10);//return해서 값이 s로 받아 구조체에 저장됨
	printfStudent(s);
	printf("main : Student : %d\n", s.s_id);//위에 함수와 따로



	return 0;
}