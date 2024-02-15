#include <stdio.h>

//배열의 요소를 교환하는 함수
void swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

//선택정렬함수
void selectionSort(int arr[], int n) {
	int i, j, min_idx;

	for (i = 0; i < n - 1;i++) {
		min_idx = i;//i==0, ...., i== n-2까지 비교

		for (j = i + 1; j < n; j++) {//j는 i에 따라 값을 비교
			if (arr[j]<arr[min_idx]) {
				min_idx = j;

			}

		}
		swap(&arr[min_idx], &arr[i]);
	}

}
//
void printfArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main_5(void) {
	//선택정렬
	//- 주어진 리스트에서 최솟값을 판단하여
	//해당 위치로 이동시키는 과정을 되풀이하는 알고리즘

	//function(swap) : 두 변수의 위치를 바꿔주는 함수
	//xp, temp, yp
	//temp = xp;
	//xp = yp;
	//yp = temp

	int arr[] = { 64,25,12,22,11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	printf(" sorted array : \n");
	printfArray(arr, n);






	return 0;
}