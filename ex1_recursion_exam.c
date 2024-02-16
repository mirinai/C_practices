#include <stdio.h>
//1. 주어진 문자열의 길이를 리턴하는 재귀함수를 만들기
//\0 -> NULL

int length_of_array(char* str) {

	if ((*str) == '\0') {
		printf("%p ", str);
		return 0;
		
	}
	else {
		printf("%p ", str);
		printf("%c \n", *str);
		int result = 1 + length_of_array(str + 1);
		printf("count : %d \n", result);
		return result;
	}
		
}

//주어진 숫자까지의 합
int sum(int n) {
	if (n <= 0) {
		return 0;
	}
	else {
		return n + sum(n - 1);
	}
}


void reverseStringPrint(const char* str, int index) {//
	if (*(str + index) == '\0')//문자열의 끝에 닿음
	{
		return;
	}
	reverseStringPrint(str, index + 1);//다음 문자로 재귀호출
	printf("%c ", str[index]);//호출스택에서 빠져나오면서 현재 문자 출력


}

int main_1(void) {

	char* str = "hello";

	int result1 = length_of_array(str);
	printf("arr의 길이 : %d\n", result1);

	int n = 5;
	result1 = sum(n);
	printf("n까지의 합 : %d\n", result1);

	reverseStringPrint(str,0);

	return 0;
}