#include <stdio.h>

//typedef : 기존에 있는 자료형에 새이름을 부여하는 문법
typedef int INTERGER;
typedef char CHAR;
typedef int* PINT;

//struct point {
	//int x;
	//int y;
//};
//구조체도 사용자가 만든 자료형이기때문에 구조체의 이름도 typedef로 바꿀수있음
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

	//스트럭처 멤버변수  초기화
	//struct point p1 = {30, 60};

	//typedef로 이렇게 씀
	POINT p1 = { 20,30 };
	POINT p2 = { 40,70 };

	printf("\n");
	printf("------------------------------\n");
	printf("\n");

	//기존 포인터에 등록했던 방법
	int num2;
	int* nump = &num2;
	//typedef로 한 스트럭처의 포인터 등록
	Person boy;
	Person* personp = &boy;

	(*personp).age = 10;//구조체 포인터에 값을 넣기
	printf("%d\n", (*personp).age);
	//위 아래 같음 밑이 더 쉬움
	personp->age = 20;//구조체 포인터에 값을 직접넣기
	personp->name = "carl";

	printf("%s, %d\n",(*personp).name, (*personp).age);
	printf("%s, %d\n", personp->name, personp->age);

	return 0;
}