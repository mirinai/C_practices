#include <stdio.h>

//1. ����Լ� �Ἥ �Է¹��� ����n���� n�� 0�� �� ������ 2�� �̾ ���� ����� ����ϴ� ���α׷� 
void output_of_infinite_dividing(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		int result = n;
		printf("2�� ���� ��� :%d\n", result);//���� ���
		output_of_infinite_dividing(n / 2);//���� ������������ ��µ�
		
	}

}
void output_of_infinite_dividing_1(int n) {//�� �����ϰ� ���� ��
	if (n > 0) {
		printf("2�� ���� ��� :%d\n", n);
		output_of_infinite_dividing(n / 2);
	}
	

}
//2. ����Լ� �Ἥ �Է¹��� ����n���� 1���� n������ ���� ����ϴ� ���α׷� ����� -> �����ؼ� ��±��� ���ֱ�
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
	printf("1. 2�� ���� ���� �Է� : ");
	scanf("%d", &n1);

	output_of_infinite_dividing(n1);
	printf("\n");
	output_of_infinite_dividing_1(n1);
	printf("\n");
	printf("-------------------\n");
	printf("\n");

	printf("1. 1���� n������ ���� ���� n�Է� : ");
	scanf("%d", &n1);
	printf("%d�϶� ��� : %d\n", n1, sum_of_n(n1));



	return 0;
}