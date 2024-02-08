#include <stdio.h>


//구조체란 ? 여러개의 변수를 묶어서 새로운 타입을 만드는 타입
				//-> 사용자 정의 자료형

//c언어에서 구조체를 정의할 때는 struct라는 키워드를 써야한다.
//구조체 이름과 멤버변수를 선언해야 함

/*
	구조체의 형태

	struct 구조체이름{
		데이터타입 멤버변수이름1;
		데이터타입 멤버변수이름2;

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

//위 아래 같음 다르게 쓴 것 
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
	printf("이름 : %s, 나이: %d, 키 : %.2f\n", person1.name, person1.age, person1.height);

	struct Person1 person2 = {//부분적으로 초기화

		.name = "armin",
		.age = 14,
		//키는 초기화 안함

	};
	//person1.age = 14; : 값 바꾸기


	POINT1 p1 = { 1,2 };
	//쓰임새 같음
	POINT2 p2 = { 1,2 };

	Person2 boy;
	Person2* personp = &boy;

	personp->age = 10;
	personp->name = "charls";

	printf("%s %d\n", personp->name, personp->age);
	//scanf("%d", &personp->age);



	return 0;
}