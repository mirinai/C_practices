#include <stdio.h>
#include <stdlib.h>


int main_3(void) {

	char input[5];//고정된 크기의 배열 선언
	printf("입력 : ");
	scanf("%s", input);

	printf("입력한 값 : %s\n", input);

	printf("\n");
	printf("--------------------\n");
	int size1;
	char* input1;
	printf("입력할 문자열의 최대 길이 입력 : ");
	scanf("%d", &size1);

	input1 = malloc((size1) * sizeof(char));//입력한 만큼의 크기가 들어감

	printf("문자열 입력 : ");
	scanf("%s", input1);
	printf("입력한 글 : %s\n", input1);
	free(input1);



	return 0;
}