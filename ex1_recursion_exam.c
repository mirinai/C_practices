#include <stdio.h>
//1. �־��� ���ڿ��� ���̸� �����ϴ� ����Լ��� �����
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

//�־��� ���ڱ����� ��
int sum(int n) {
	if (n <= 0) {
		return 0;
	}
	else {
		return n + sum(n - 1);
	}
}


void reverseStringPrint(const char* str, int index) {//
	if (*(str + index) == '\0')//���ڿ��� ���� ����
	{
		return;
	}
	reverseStringPrint(str, index + 1);//���� ���ڷ� ���ȣ��
	printf("%c ", str[index]);//ȣ�⽺�ÿ��� ���������鼭 ���� ���� ���


}

int main_1(void) {

	char* str = "hello";

	int result1 = length_of_array(str);
	printf("arr�� ���� : %d\n", result1);

	int n = 5;
	result1 = sum(n);
	printf("n������ �� : %d\n", result1);

	reverseStringPrint(str,0);

	return 0;
}