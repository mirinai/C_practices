#include <stdio.h>
//1. 구조체	Point를 정의(int 형 구조체 변수 2개)하고, main함수에서 두 점의 좌표를 초기화하고 출력하는 프로그램 작성
struct Point {
	int garo;
	int sero;
};




// 2. 구조체 Student(char[50], int 각각 1개씩 등록)를 정의하고, main함수에서 두명의 학생정보를 초기화하고 출력하는 프로그램 만들기
struct Student {
	char name[50];
	int age;
};


//3. 구조체 Rectangle(int형 두개 등록)를 정의하고, main함수에서 두 직사각형의 너비와 높이를 초기화
// 그 다음에 구조체에서 값을 가져와서 직사각형의 넓이를 구하고 넓이를 리턴하는 함수 만들기
//그리고 그 값을 출력
int Area(int w,int h) {
	return w * h;

}
int main_3(void) {


	struct Rectangle {
		int width;
		int height;
	};

	//1. 구조체	Point를 정의(int 형 구조체 변수 2개)하고, main함수에서 두 점의 좌표를 초기화하고 출력하는 프로그램 작성
	struct Point coordinate1 = { 45,75 };
	struct Point coordinate2 = { 20,80 };
	printf("coordinate1의 좌표 : 가로 :%d, 세로 : %d\n", coordinate1.garo, coordinate1.sero);
	printf("coordinate2의 좌표 : 가로 :%d, 세로 : %d\n", coordinate2.garo, coordinate2.sero);

	printf("\n");
	printf("------------------------------\n");
	printf("\n");

	//2. 구조체 Student(char[50], int 각각 1개씩 등록)를 정의하고, main함수에서 두명의 학생정보를 초기화하고 출력하는 프로그램 만들기
	struct Student student1 = {
		.name = "eren",
		.age = 19,

	};
	struct Student student2 = { "mikasa",18 };
	printf("student1의 이름 : %s, 나이 : %d\n",student1.name,student1.age);
	printf("student2의 이름 : %s, 나이 : %d\n",student2.name,student2.age);

	printf("\n");
	printf("------------------------------\n");
	printf("\n");

	//3. 구조체 Rectangle(int형 두개 등록)를 정의하고, main함수에서 두 직사각형의 너비와 높이를 초기화
	// 그 다음에 구조체에서 값을 가져와서 직사각형의 넓이를 구하고 넓이를 리턴하는 함수 만들기
	//그리고 그 값을 출력
	struct Rectangle rectangle1 = {
		.width = 20,
		.height = 40,
	};
	struct Rectangle rectangle2 = {
		.width = 60,
		.height = 20,
	};
	//printf("rectangle1의 너비 : %d, 높이 : %d\n",rectangle1.width,rectangle1.height);
	//printf("rectangle2의 너비 : %d, 높이 : %d\n",rectangle2.width,rectangle2.height);
	printf("rectangle1의 넓이 : %d\n", Area(rectangle1.width, rectangle1.height));
	printf("rectangle2의 넓이 : %d\n", Area(rectangle2.width,rectangle2.height));

	printf("\n");
	printf("------------------------------\n");
	printf("\n");



	return 0;
}