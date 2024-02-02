#include <stdio.h>

int add1(int a, int b) {
	printf("a : %d, b : %d\n", a, b);
	return a + b;
}
void add2(void) {
	printf("a : %d, b : %d\n", 1, 2);
}
void add3(int a, int b) {
	printf("a : %d, b : %d\n", a, b);
}
int add4(int a, int b);//선언


int main_1(void) {

	//호출 하는 방법
	//함수이름(매개변수 자료형에 맞는 데이터/변수);
	add3(1, 3);
	add3(2, 3);
	add3(3, 3);
	printf("a+b : %d\n", add4(3,3));
	//함수 : 특정 작업을 수행하는 코드의 묶음, 특정작업을 분리해서 정의하고, 그것을 쓸 수 있게 해주는 개념

	//함수의 장점
	// 1. 재사용성 : 한번 정의하면 프로그램 안 여러 곳에서 되풀이해서 호출할 수 있음
	// 2. 구조화 :프로그램을 작은 부분으로 나누어 관리하기 쉽게 만듦
	// 3. 유지보수 : 프로그램의 특정 부분만 수정하면 되므로 전체적인 유지보수가 쉬워집니다.

	/*
	반환형 함수이름(입력데이터 자료형 ) {
		함수의 기능
	}
	
	*/



	return 0;
}
int add4(int a, int b) {
	return a + b;
}