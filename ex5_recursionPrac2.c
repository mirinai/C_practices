#include <stdio.h>
//1. ���ڿ��� �� ���ڸ� �Ųٷ� ����ϴ� ����Լ��� �����
//	->���ڿ� ������ �ϳ� ����� �Լ��� �־ �����
void reverse_of_string(char* str) {
	//int size = sizeof(str) / sizeof(*(str + 0));

	//char* temp = strtok(str, "");

	//hello -> h -> e -> l ->l ->o -> \0

	if (*str == '\0') {
		return;//������ �Ǹ鼭 �Լ��� ���ñ��� ������ ������ ���ں��� ��µȴ� 
	}
	else {
		reverse_of_string(str+1);//
		printf("%c", *str);
	}

}




//2. �ڿ��� n�� m�� �Ű������� �޾�, n���� m������ ���� ��� ����ϴ� ����Լ��� �����
void  plus_from_n_m(int n, int m) {
	printf("%d ", n);
	if (n < m) {
		plus_from_n_m(n+1, m);

	}
	
}



//3.�Լ��� ���ڿ��� ���ڸ� �ް�, �ش� ���ڰ� ���ڿ��� � �ִ��� ������ �����ϴ� �Լ��� �����
//(����Լ� ����)//?
int how_many_char(char* str, char c) {


	if (*str == '\0') {
		return 0;
	}
	if (*str == c) {
		
		return 1+ how_many_char(str + 1, c);
		
	}
	else {
		return how_many_char(str + 1, c);
	}
	

}



//4. int �� �Ű������� �ϳ� �޾Ƽ� �� �ڸ����� ���� ����ϴ� ����Լ� �����
int sum_of_jari_num(int n) {

	if (n == 0) {
		
		return 0;

	}
	else {
		return n%10 + sum_of_jari_num(n / 10);
		
	}
}



int main(void) {

	char* str1;
	char str2[100];
	str1 = str2;

	printf("1. �Ųٷ� �� �� �Է� : ");
	scanf("%s", str1);

	reverse_of_string(str1);
	printf("\n");

	printf("\n");
	printf("--------\n");
	printf("\n");

	printf("2. n���� m���� ����� n�� m �Է�(����) : ");
	int n, m;
	scanf("%d %d", &n,&m);
	plus_from_n_m(n, m);
	printf("\n");


	printf("\n");
	printf("--------\n");
	printf("\n");
	char arr1[100];

	char c1;
	printf("3. ���ڿ� ���� �Է�(����) : ");
	scanf("%s %c", arr1, &c1);

	printf("������ ���� : %d\n", how_many_char(arr1, c1));


	printf("\n");
	printf("--------\n");
	printf("\n");

	int l;

	printf("4. �ڸ����� ����� �� �ֱ� : ");
	scanf("%d", &l);
	printf("�ڸ��� : %d\n", sum_of_jari_num(l));



	return 0;
}