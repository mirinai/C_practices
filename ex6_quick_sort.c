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
void quickSort(int arr[], int left, int right) {//left, right -> 가장자리 인덱스
	int pl = left;
	int pr = right;
	int pivot = arr[(pl + pr) / 2];//가운데 값을 피봇으로 설정
	int count = 0;

	printf("---------------\n");
	printf("pivot : %d\n\n", pivot);
	printf("pl : %d, pr : %d\n", pl, pr);
	printArray(arr, right + 1);

	while (pl <= pr) {
		while (arr[pl] < pivot) pl++;
		while (arr[pr] > pivot) pr--;
		count = count + 1;
		printf("while(pl<=pr) count : %d\n", count);
		printf("pl : %d, pr : %d\n", pl, pr);

		if (pl <= pr) {
			swap(&arr[pl], &arr[pr]);
			pl++;
			pr--;
		}
		printf("while 돌아가고 있음 pl : %d, pr : %d\n",pl,pr);
		printf("\nwhile(pl<=pr)의 안\n");
		printArray(arr, right + 1);
	}
	printf("\nwhile(pl<=pr)의 밖\n");
	printArray(arr, right + 1);
	if (left < pr) quickSort(arr, left, pr);//바꾸기
	if (pl < right) quickSort(arr, pl, right);//
	
}

int main_6(void) {

	int arr[] = { 30,50,40,10,20,60,80,70 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("original arr : \n");
	printArray(arr, n);
	
	quickSort(arr, 0, n-1);

	printf("sorted arr : \n");
	printArray(arr, n);






	return 0;
}
