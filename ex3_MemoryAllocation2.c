#include <stdio.h>
#include <stdlib.h>


int main_3(void) {

	char input[5];//������ ũ���� �迭 ����
	printf("�Է� : ");
	scanf("%s", input);

	printf("�Է��� �� : %s\n", input);

	printf("\n");
	printf("--------------------\n");
	int size1;
	char* input1;
	printf("�Է��� ���ڿ��� �ִ� ���� �Է� : ");
	scanf("%d", &size1);

	input1 = malloc((size1) * sizeof(char));//�Է��� ��ŭ�� ũ�Ⱑ ��

	printf("���ڿ� �Է� : ");
	scanf("%s", input1);
	printf("�Է��� �� : %s\n", input1);
	free(input1);



	return 0;
}