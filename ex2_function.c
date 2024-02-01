#include <stdio.h>
#include "plus_between_a_b.h";//3. 에서 불러옴

//1. 두 정수를 입력 받아 두수 가운데 더 큰값을 반환하는 함수를 작성
int moreBigger(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
//2. 정수 하나와 문자하나를 입력받아 해당 문자를 정수만큼 반복해서 출력하는 함수 만들기
void outputPerNum(int a, char b);//아래에 내용 있음

//3.두개의 정수를 매개변수로 입력받아서 두 정수 사이의 모든 정수의 합을 구해서 되돌리는 함수를 정의하는 함수를 만들기
//plus_between_a_b.h에 있음

//4. 두 정수와 연산자를 입력받아 해당 연산자에 맞은 연산을 수행하는 함수를 만들기
//함수형태 : void calculate(int num1, int num2, char operator);
//이때 num2에 값으로 0이 들어오면 "Division by zero is not allowed."라는 메세지를 출력해라
//(switch문 쓰기)
//(+,-,*,/)
void calculate(int num1, int num2, char operator) {
	switch (operator){
	case '+':
		printf("%d\n", num1+num2);
		break;
	case '-':
		printf("%d\n", num1 - num2);
		break;
	case '*':
		printf("%d\n", num1 * num2);
		break;
	case '/':
		if (num2 == 0) {
			printf("Division by zero is not allowed.\n");
		}
		else {
			printf("%d\n", num1 / num2);
			break;
		}
		
	
	default:
		printf("Division by zero is not allowed.\n");
	}
}


int main_2(void) {
	
	//1.
	int n1, n2;
	printf("1. 두 정수 입력(띄어쓰기) :");
	scanf("%d %d", &n1, &n2);
	printf("큰값 : %d\n", moreBigger(n1, n2));
	printf("\n");
	printf("-----------\n");
	//2.
	int n3;
	char c1;

	printf("2. 첫번째는 정수, 두번째는 문자 입력(띄어쓰기) :");
	scanf("%d %c", &n3, &c1);
	outputPerNum(n3, c1);

	printf("\n");
	printf("-----------\n");
	//3.
	//plus_between_a_b.h 에서 가져옴
	int n4, n5;
	printf("3. 두 정수 입력(띄어쓰기), 뒤의 수가 더 큼 :");
	scanf("%d %d", &n4, &n5);
	int result1 = plus_of_all_between(n4, n5);
	printf("두 수 사이의 값들의 합 : %d\n", result1);

	printf("\n");
	printf("-----------\n");
	//4.
	printf("4. 두 정수 입력하고 연산자(+,-,*,/)를 입력(띄어쓰기) :");
	int n6, n7;
	char c2;
	scanf("%d %d %c", &n6, &n7,&c2);
	calculate(n6,n7,c2);


	return 0;
}
void outputPerNum(int a, char b) {
	for (int i = 0; i < a; i++) {
		printf("%c ", b);
	}
	printf("\n");
}