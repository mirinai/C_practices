#include <stdio.h>


int main_4(void) {
	//1.정수형 변수가 a가 있을때 포인터를 써 a의 값을 출력하는 코드 만들기
	int* ptr1;
	int a = 1;
	ptr1 = &a;

	printf("1. ptr1을 쓴 a의 값 : %d\n", *ptr1);

	printf("\n");
	printf("--------------\n");
	printf("\n");

	//2. 정수형 변수 b의 값을 포인터를 써서 10으로 바꾸기
	int* ptr2;
	int b=0;
	ptr2 = &b;
	*ptr2 = 10;
	printf("포인터로 바꾼 b의 값 : %d\n", b);

	printf("\n");
	printf("--------------\n");
	printf("\n");

	//3.정수 배열 arr1의 첫번째 요소의 값을 포인터를 써서 출력
	//배열의 값은 아무거나 쓰셈
	int arr1[3] = { 10,20,30 };
	int* ptr3;
	ptr3 = arr1;
	printf("포인터로 쓴 arr1의 첫번째 요소의 값(arr1[0]의 값 : %d\n", *ptr3);


	printf("\n");
	printf("--------------\n");
	printf("\n");

	//4. 배열의 요소 {1,2,3,4,5}를 포인터연산으로 역순으로 출력하는 프로그램을 만들기
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