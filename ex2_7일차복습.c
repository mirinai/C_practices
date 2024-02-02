#include <stdio.h>
//1. 정수를 매개변수로 받아 소수면 1을, 소수가 아니면 0을 되돌리는 함수를 만들기
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
//2. 정수를 매개변수로 받아 그 정수를 구성하는 각 자리수의 합을 리턴하는 함수를 만들기
//-> 25를 넣었을 때 결과 -> 7
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
	printf("소수 판단하기 0나오면 소수아님");
	printf("정수입력 : ");
	scanf("%d", &n1);
	int result1 = sosu_judge(n1);
	if (result1 == 0) {
		printf("소수아님\n");
	}
	else {
		printf("%d는 소수\n",result1);
	}

	printf("\n");
	printf("----------\n");
	printf("\n");

	printf("각 자리수의 합 구하기");
	printf("정수입력 : ");
	scanf("%d", &n1);

	printf("%d를 넣었을 때 결과 -> %d\n", n1, plus_of_evr_num(n1));



	return 0;
}