#include <stdio.h>
//1. ������ �Ű������� �޾� �Ҽ��� 1��, �Ҽ��� �ƴϸ� 0�� �ǵ����� �Լ��� �����
int sosu_judge(int n) {

	int bool=0;
	int result;
	if (n <= 1) {
		return 0;
	}
	if (n == 2){
		result = n;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n % i != 0) {
				bool = 0;
				result = n;

			}

			else {
				bool = 1;
				result = 0;
				break;
			}
		}
	}
	return result;
	

	/*if (bool == 0) {
		return n;
	}
	else {
		return 0;
	}*/
}
//2. ������ �Ű������� �޾� �� ������ �����ϴ� �� �ڸ����� ���� �����ϴ� �Լ��� �����
//-> 25�� �־��� �� ��� -> 7
int plus_of_evr_num(int n) {
	int num=-1;
	int sum=0;
	while (n > 0) {
		num = n % 10;
		n = n / 10;
		sum = sum + num;

	}
	return sum;
}


int main_2(void) {
	int n1;
	printf("�Ҽ� �Ǵ��ϱ� 0������ �Ҽ��ƴ�");
	printf("�����Է� : ");
	scanf("%d", &n1);
	int result1 = sosu_judge(n1);
	if (result1 == 0) {
		printf("�Ҽ��ƴ�\n");
	}
	else {
		printf("%d�� �Ҽ�\n",result1);
	}

	printf("\n");
	printf("----------\n");
	printf("\n");

	printf("�� �ڸ����� �� ���ϱ�");
	printf("�����Է� : ");
	scanf("%d", &n1);

	printf("%d�� �־��� �� ��� -> %d\n", n1, plus_of_evr_num(n1));



	return 0;
}