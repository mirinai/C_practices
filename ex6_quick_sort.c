#include <stdio.h>

//������
// - �ϳ��� ����Ʈ�� �ǹ��̶�� ���ذ��� �߽����� �� �κ����� ������, �� �κ��� ������ ��� ����Ʈ�� �����ϴ� ���

//1. ����(Divide) : ����Ʈ






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

//�� ���� �Լ�
void quickSor(int arr[], int left, int right) {//left, right -> �����ڸ� �ε���
	int pl = left;
	int pr = right;
	int pivot = arr[(pl + pr) / 2];//����
	printf("pivot : %d\n", (pl + pr) / 2);

	while (pl <= pr) {
		while (arr[pl] < pivot) pl++;
		while (arr[pr] > pivot) pr--;


		if (pl <= pr) {
			swap(&arr[pl], &arr[pr]);
			pl++;
			pr--;
		}
		printf("while ���ư��� ���� pl : %d, pr : %d\n",pl,pr);
		printArray(arr, right + 1);
	}
	printArray(arr, right + 1);
	if (left < pr) quickSor(arr, left, pr);//�ٲٱ�
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