#include <stdio.h>

//1. 재귀함수 써서 입력받은 정수n으로 n이 0이 될 때까지 2로 이어서 나눈 결과를 출력하는 프로그램 
void output_of_infinite_dividing(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		int result = n;
		printf("2로 나눈 결과 :%d\n", result);//먼저 출력
		output_of_infinite_dividing(n / 2);//따라서 내림차순으로 출력됨
		
	}

}
void output_of_infinite_dividing_1(int n) {//더 심플하게 만든 것
	if (n > 0) {
		printf("2로 나눈 결과 :%d\n", n);
		output_of_infinite_dividing(n / 2);
	}
	

}
//2. 재귀함수 써서 입력받은 정수n으로 1부터 n까지의 합을 계산하는 프로그램 만들기 -> 리턴해서 출력까지 해주기
int sum_of_n(int n) {
	if (n == 1) {
		return 1;

	}
	else {
		return n + sum_of_n(n - 1);
	}
}

int main_1(void) {

	int n1;
	printf("1. 2로 나눌 정수 입력 : ");
	scanf("%d", &n1);

	output_of_infinite_dividing(n1);
	printf("\n");
	output_of_infinite_dividing_1(n1);
	printf("\n");
	printf("-------------------\n");
	printf("\n");

	printf("1. 1부터 n까지의 합을 구할 n입력 : ");
	scanf("%d", &n1);
	printf("%d일때 결과 : %d\n", n1, sum_of_n(n1));



	return 0;
}