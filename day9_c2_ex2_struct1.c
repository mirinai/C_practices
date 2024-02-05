#include <stdio.h>
//person구조체 선언// main안에 써도 됨
struct person {
	char name[20];
	int age;
	float height;

};

int main_2(void) {
	//구조체 : 여러개의 변수를 묶어서 새로운 타입을 만드는 방법
	// ->사용자 정의 자료형 이라고 보면 됨

	// c언어 구조체 없이 코드를 쓰게 되면?

	/*char person1Name[20] = "john";
	int person1Age = 25;
	float person1Height = 175.5;

	printf("이름 : %s, 나이 : %d, 키 : %.2f\n", person1Name, person1Age, person1Height);
	char person2Name[20] = "sohn";
	int person2Age = 25;
	float person2Height = 175.5;*/

	// 사람의 정보를 저장하는 구조체 만들기
	// 구조체를 만들려면 struct라는 키워드를 선언해줘야함

	/*
		struct 구조체이름{

		변수 선언 // -> 구조체 안에 있는 변수를 멤버변수라고 부름

	}
	*/

	//구조체 (변수 선언) 및 초기화
	struct person person1 = { "john",25,175.5 };
	printf("이름 : %s, 나이 : %d, 키 : %.2f\n", person1.name, person1.age, person1.height);

	person1.age = 10;//사람1->구조체 ->나이->초기화
	printf("나이 : %d\n\n", person1.age);

	struct person person2 = {
		.name = "edward",
		.age = 15,
		.height = 160.5
	};
	printf("이름 : %s, 나이 : %d, 키 : %.2f\n", person2.name, person2.age, person2.height);

	return 0;
}