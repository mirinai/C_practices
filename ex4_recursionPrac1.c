#include <stdio.h>


//����Լ� : �Լ� �ȿ��� �����θ� �ٽ� ȣ���ϴ� �Լ�


//stack �ڷᱸ�� : ���߿� ���� �ͺ��� �������� exam)�����۽�
int test(int a) {
	//printf("%d\n", a);
	if (a <= 0) {
		return;
	}
	printf("test - %d |", a);//test - 5 |test - 4 |test - 3 |test - 2 |test - 1 |
	test(a - 1);//�̴�θ� ��Ÿ�� ���� �����÷ο�

}

int factorial(int n) {
	printf("�Լ� ȣ�� : factorial - %d\n", n);

	if (n == 0) {
		printf("���� ���� : ���ϰ� : 1\n");
		return 1;
	}
	else {
		int result= n * factorial(n - 1);
		printf("��� %d x factorial - %d = %d\n", n, n - 1, result);
		return result;
	}
}//���丮���� �Լ��� ǥ��
//�Լ��� ����Ǵ� ���� ���� -> ����Լ��� ���ÿ� ���� ���� -> ���ǿ� ������ ������ Ư¡���� 
// �Ųٷ� ���߿� ���� �ͺ��� ����
// 
//result�� ���� ���� ����Ǵ� ���� �ƴ�


int main_4(void) {

	test(5);
	int num;
	printf("\n");
	printf("-----------\n");
	printf("���丮�� n! �ֱ� : ");
	scanf("%d", &num);
	printf("%d! = %d\n", num, factorial(num));

	return 0;
}