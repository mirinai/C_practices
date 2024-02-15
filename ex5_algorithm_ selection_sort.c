#include <stdio.h>

//�迭�� ��Ҹ� ��ȯ�ϴ� �Լ�
void swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

//���������Լ�
void selectionSort(int arr[], int n) {
	int i, j, min_idx;

	for (i = 0; i < n - 1;i++) {
		min_idx = i;//i==0, ...., i== n-2���� ��

		for (j = i + 1; j < n; j++) {//j�� i�� ���� ���� ��
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
	//��������
	//- �־��� ����Ʈ���� �ּڰ��� �Ǵ��Ͽ�
	//�ش� ��ġ�� �̵���Ű�� ������ ��Ǯ���ϴ� �˰���

	//function(swap) : �� ������ ��ġ�� �ٲ��ִ� �Լ�
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