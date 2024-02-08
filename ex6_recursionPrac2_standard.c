#include <stdio.h>

//재귀함수 : 함수 안에서 스스로를 다시 호출하는 함수


//stack 자료구조 : 나중에 들어온 것부터 빠져나감 exam)프링글스
int test1(int a) {
	//printf("%d\n", a);
	if (a <= 0) {//없으면 런타임 스택 오버플로우
		return;
	}
	printf("test - %d |", a);//test - 5 |test - 4 |test - 3 |test - 2 |test - 1 |
	test1(a - 1);

}

int factorial1(int n) {
	printf("함수 호출 : factorial - %d\n", n);

	if (n == 0) {
		printf("조건 도달 : 리턴값 : 1\n");
		return 1;
	}
	else {
		int result = n * factorial1(n - 1);
		printf("계산 %d x factorial - %d = %d\n", n, n - 1, result);
		return result;
	}
}//팩토리얼을 함수로 표현
//함수가 저장되는 곳이 스택 -> 재귀함수로 스택에 값이 쌓임 -> 조건에 닿으면 스택의 특징으로 
// 거꾸로 나중에 쌓인 것부터 리턴
// 
//result에 여러 값이 저장되는 것이 아님

//1. 문자열의 각 문자를 거꾸로 출력하는 재귀함수




void reverse_printf_string(char* str) {
	if (*str == '\0') {
		return;
	}
	else {
		reverse_printf_string(str + 1);
		printf("%c" ,*str);

	}
}

//2. 자연수 n과 m을 매개변수로 받아, n부터 m까지의 수를 모두 출력하는 재귀함수
void print_numbers(int n, int m) {
	printf("%d ", n);
	if (n < m) {
		print_numbers(n + 1, m);
	}
}

//3.함수에 문자열과 문자를 받고, 해당 문자가 문자열에 몇개 있는지 갯수를 리턴하는 함수를 만들기(재귀함수로)
int count_char(char* str, char c) {
	if (*str == '\0') {//문자열의 끝에 닿았다면
		//0을 리턴
		return 0;
	}
	else if (*str == c) {//현재 찾는 문자라면 1더하고 다음문자로
		return 1 + count_char(str + 1, c);
	}
	else {//찾는 문자가 아니라면
		return count_char(str + 1, c);//다음 문자로 넘어가기
	}
	
		

}
//4.int 형 매개변수를 하나 받아서 각 자릿수의 합을 계산하는 재귀함수 만들기
int digit_sum(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n % 10+digit_sum(n/10);//마지막 자릿수를 더하고 다음 자릿수로 넘어감
		//함수가 호출될 때 n ->순서 -> 123456 ->12345 -> ...-> 12 -> 1 -> 0
		//리턴되는 순서 1+2+3+4+5+6
	}
}

int main_6(void) {

	test1(5);
	printf("%d! = %d\n", 5, factorial1(5));
	
	printf("\n");
	printf("------------\n");
	//1.
	char str[] = "hello";
	reverse_printf_string(str);
	printf("\n");
	printf("------------\n");
	//2.
	print_numbers(5, 8);
	printf("\n");
	printf("------------\n");
	//3.
	char str3[] = "hello world";
	printf("%d\n", count_char(str, 'l'));

	printf("\n");
	printf("------------\n");
	//4.

	printf("%d\n", digit_sum(123456));

	return 0;
}