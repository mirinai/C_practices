#include <stdio.h>


int main_4(void) {
	//1.������ ������ a�� ������ �����͸� �� a�� ���� ����ϴ� �ڵ� �����
	int* ptr1;
	int a = 1;
	ptr1 = &a;

	printf("1. ptr1�� �� a�� �� : %d\n", *ptr1);

	printf("\n");
	printf("--------------\n");
	printf("\n");

	//2. ������ ���� b�� ���� �����͸� �Ἥ 10���� �ٲٱ�
	int* ptr2;
	int b=0;
	ptr2 = &b;
	*ptr2 = 10;
	printf("�����ͷ� �ٲ� b�� �� : %d\n", b);

	printf("\n");
	printf("--------------\n");
	printf("\n");

	//3.���� �迭 arr1�� ù��° ����� ���� �����͸� �Ἥ ���
	//�迭�� ���� �ƹ��ų� ����
	int arr1[3] = { 10,20,30 };
	int* ptr3;
	ptr3 = arr1;
	printf("�����ͷ� �� arr1�� ù��° ����� ��(arr1[0]�� �� : %d\n", *ptr3);


	printf("\n");
	printf("--------------\n");
	printf("\n");

	//4. �迭�� ��� {1,2,3,4,5}�� �����Ϳ������� �������� ����ϴ� ���α׷��� �����
	int arr2[5];
	int temp=0;
	for (int i = 1; i < 6; i++) {
		arr2[i - 1] = i;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	int* ptr4;
	ptr4 = arr2;

	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			
			temp = *(ptr4 + i);
			*(ptr4 + i) = *(ptr4 + j);
			*(ptr4 + j) = temp;
		}

		
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr2[i]);
	}


	return 0;
}