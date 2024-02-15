#include <stdio.h>

//퀵정렬
// - 하나의 리스트를 피벗이라는 기준값을 중심으로 두 부분으로 나누고, 각 부분을 정렬해 모든 리스트를 정렬하는 방법

//1. 분할(Divide) : 리스트






void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");



}

//퀵 정렬 함수
void quickSor(int arr[], int left, int right) {//left, right -> 가장자리 인덱스
	int pl = left;
	int pr = right;
	int pivot = arr[(pl + pr) / 2];//기준
	printf("pivot : %d\n", (pl + pr) / 2);

	while (pl <= pr) {
		while (arr[pl] < pivot) pl++;
		while (arr[pr] > pivot) pr--;


		if (pl <= pr) {
			swap(&arr[pl], &arr[pr]);
			pl++;
			pr--;
		}
		printf("while 돌아가고 있음 pl : %d, pr : %d\n",pl,pr);
		printArray(arr, right + 1);
	}
	printArray(arr, right + 1);
	if (left < pr) quickSor(arr, left, pr);//바꾸기
	if (pl < right) quickSor(arr, pl, right);//
	
}

int main(void) {

	int arr[] = { 30,50,40,10,20,60,80,70 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("original arr : \n");
	printArray(arr, n);
	
	quickSor(arr, 0, n-1);

	printf("sorted arr : \n");
	printArray(arr, n);






	return 0;
}