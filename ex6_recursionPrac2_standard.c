#include <stdio.h>

//����Լ� : �Լ� �ȿ��� �����θ� �ٽ� ȣ���ϴ� �Լ�


//stack �ڷᱸ�� : ���߿� ���� �ͺ��� �������� exam)�����۽�
int test1(int a) {
	//printf("%d\n", a);
	if (a <= 0) {//������ ��Ÿ�� ���� �����÷ο�
		return;
	}
	printf("test - %d |", a);//test - 5 |test - 4 |test - 3 |test - 2 |test - 1 |
	test1(a - 1);

}

int factorial1(int n) {
	printf("�Լ� ȣ�� : factorial - %d\n", n);

	if (n == 0) {
		printf("���� ���� : ���ϰ� : 1\n");
		return 1;
	}
	else {
		int result = n * factorial1(n - 1);
		printf("��� %d x factorial - %d = %d\n", n, n - 1, result);
		return result;
	}
}//���丮���� �Լ��� ǥ��
//�Լ��� ����Ǵ� ���� ���� -> ����Լ��� ���ÿ� ���� ���� -> ���ǿ� ������ ������ Ư¡���� 
// �Ųٷ� ���߿� ���� �ͺ��� ����
// 
//result�� ���� ���� ����Ǵ� ���� �ƴ�

//1. ���ڿ��� �� ���ڸ� �Ųٷ� ����ϴ� ����Լ�




void reverse_printf_string(char* str) {
	if (*str == '\0') {
		return;
	}
	else {
		reverse_printf_string(str + 1);
		printf("%c" ,*str);

	}
}

//2. �ڿ��� n�� m�� �Ű������� �޾�, n���� m������ ���� ��� ����ϴ� ����Լ�
void print_numbers(int n, int m) {
	printf("%d ", n);
	if (n < m) {
		print_numbers(n + 1, m);
	}
}

//3.�Լ��� ���ڿ��� ���ڸ� �ް�, �ش� ���ڰ� ���ڿ��� � �ִ��� ������ �����ϴ� �Լ��� �����(����Լ���)
int count_char(char* str, char c) {
	if (*str == '\0') {//���ڿ��� ���� ��Ҵٸ�
		//0�� ����
		return 0;
	}
	else if (*str == c) {//���� ã�� ���ڶ�� 1���ϰ� �������ڷ�
		return 1 + count_char(str + 1, c);
	}
	else {//ã�� ���ڰ� �ƴ϶��
		return count_char(str + 1, c);//���� ���ڷ� �Ѿ��
	}
	
		

}
//4.int �� �Ű������� �ϳ� �޾Ƽ� �� �ڸ����� ���� ����ϴ� ����Լ� �����
int digit_sum(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n % 10+digit_sum(n/10);//������ �ڸ����� ���ϰ� ���� �ڸ����� �Ѿ
		//�Լ��� ȣ��� �� n ->���� -> 123456 ->12345 -> ...-> 12 -> 1 -> 0
		//���ϵǴ� ���� 1+2+3+4+5+6
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