#include <stdio.h>
#include "plus_between_a_b.h";//3. ���� �ҷ���

//1. �� ������ �Է� �޾� �μ� ��� �� ū���� ��ȯ�ϴ� �Լ��� �ۼ�
int moreBigger(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
//2. ���� �ϳ��� �����ϳ��� �Է¹޾� �ش� ���ڸ� ������ŭ �ݺ��ؼ� ����ϴ� �Լ� �����
void outputPerNum(int a, char b);//�Ʒ��� ���� ����

//3.�ΰ��� ������ �Ű������� �Է¹޾Ƽ� �� ���� ������ ��� ������ ���� ���ؼ� �ǵ����� �Լ��� �����ϴ� �Լ��� �����
//plus_between_a_b.h�� ����

//4. �� ������ �����ڸ� �Է¹޾� �ش� �����ڿ� ���� ������ �����ϴ� �Լ��� �����
//�Լ����� : void calculate(int num1, int num2, char operator);
//�̶� num2�� ������ 0�� ������ "Division by zero is not allowed."��� �޼����� ����ض�
//(switch�� ����)
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
	printf("1. �� ���� �Է�(����) :");
	scanf("%d %d", &n1, &n2);
	printf("ū�� : %d\n", moreBigger(n1, n2));
	printf("\n");
	printf("-----------\n");
	//2.
	int n3;
	char c1;

	printf("2. ù��°�� ����, �ι�°�� ���� �Է�(����) :");
	scanf("%d %c", &n3, &c1);
	outputPerNum(n3, c1);

	printf("\n");
	printf("-----------\n");
	//3.
	//plus_between_a_b.h ���� ������
	int n4, n5;
	printf("3. �� ���� �Է�(����), ���� ���� �� ŭ :");
	scanf("%d %d", &n4, &n5);
	int result1 = plus_of_all_between(n4, n5);
	printf("�� �� ������ ������ �� : %d\n", result1);

	printf("\n");
	printf("-----------\n");
	//4.
	printf("4. �� ���� �Է��ϰ� ������(+,-,*,/)�� �Է�(����) :");
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