#include <stdio.h>
//1. 문자열의 각 문자를 거꾸로 출력하는 재귀함수를 만들기
//	->문자열 변수를 하나 만들고 함수에 넣어서 만들기
void reverse_of_string(char* str) {
	//int size = sizeof(str) / sizeof(*(str + 0));

	//char* temp = strtok(str, "");

	//hello -> h -> e -> l ->l ->o -> \0

	if (*str == '\0') {
		return;//리턴이 되면서 함수가 스택구조 때문에 마지막 문자부터 출력된다 
	}
	else {
		reverse_of_string(str+1);//
		printf("%c", *str);
	}

}




//2. 자연수 n과 m을 매개변수로 받아, n부터 m까지의 수를 모두 출력하는 재귀함수를 만들기
void  plus_from_n_m(int n, int m) {
	printf("%d ", n);
	if (n < m) {
		plus_from_n_m(n+1, m);

	}
	
}



//3.함수에 문자열과 문자를 받고, 해당 문자가 문자열에 몇개 있는지 갯수를 리턴하는 함수를 만들기
//(재귀함수 쓰기)//?
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



//4. int 형 매개변수를 하나 받아서 각 자릿수의 합을 계산하는 재귀함수 만들기
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

	printf("1. 거꾸로 쓸 글 입력 : ");
	scanf("%s", str1);

	reverse_of_string(str1);
	printf("\n");

	printf("\n");
	printf("--------\n");
	printf("\n");

	printf("2. n부터 m까지 출력할 n과 m 입력(띄어쓰기) : ");
	int n, m;
	scanf("%d %d", &n,&m);
	plus_from_n_m(n, m);
	printf("\n");


	printf("\n");
	printf("--------\n");
	printf("\n");
	char arr1[100];

	char c1;
	printf("3. 문자열 문자 입력(띄어쓰기) : ");
	scanf("%s %c", arr1, &c1);

	printf("문자의 갯수 : %d\n", how_many_char(arr1, c1));


	printf("\n");
	printf("--------\n");
	printf("\n");

	int l;

	printf("4. 자릿수를 계산할 값 넣기 : ");
	scanf("%d", &l);
	printf("자릿수 : %d\n", sum_of_jari_num(l));



	return 0;
}