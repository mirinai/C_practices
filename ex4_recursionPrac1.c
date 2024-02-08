#include <stdio.h>


//재귀함수 : 함수 안에서 스스로를 다시 호출하는 함수


//stack 자료구조 : 나중에 들어온 것부터 빠져나감 exam)프링글스
int test(int a) {
	//printf("%d\n", a);
	if (a <= 0) {
		return;
	}
	printf("test - %d |", a);//test - 5 |test - 4 |test - 3 |test - 2 |test - 1 |
	test(a - 1);//이대로면 런타임 스택 오버플로우

}

int factorial(int n) {
	printf("함수 호출 : factorial - %d\n", n);

	if (n == 0) {
		printf("조건 도달 : 리턴값 : 1\n");
		return 1;
	}
	else {
		int result= n * factorial(n - 1);
		printf("계산 %d x factorial - %d = %d\n", n, n - 1, result);
		return result;
	}
}//팩토리얼을 함수로 표현
//함수가 저장되는 곳이 스택 -> 재귀함수로 스택에 값이 쌓임 -> 조건에 닿으면 스택의 특징으로 
// 거꾸로 나중에 쌓인 것부터 리턴
// 
//result에 여러 값이 저장되는 것이 아님


int main_4(void) {

	test(5);
	int num;
	printf("\n");
	printf("-----------\n");
	printf("팩토리얼 n! 넣기 : ");
	scanf("%d", &num);
	printf("%d! = %d\n", num, factorial(num));

	return 0;
}