#include <stdio.h>

//��������
//-Ư�������� �տ� �ִ� ���ҵ��� �̹� ���ĵǾ��ִٴ� �����Ʒ���
//������ ��ġ�� Ư�����Ҹ� �����Ҽ� �ֵ��� ���ذ��� �����ϴ� �˰���

//���� ���Ұ� ���� ���Һ��� Ŭ��, �̹� ���� ���ҵ��� ���ĵǾ��ִٴ� �������� �񱳸� ���߰� ���� ���ҷ� �Ѿ
//��¼�� ���� ������ ���� ���� ���Һ��� �۴ٸ�, ������ ��ġ�� ã�� �����ϱ� ���� ���� ���ҵ�� �񱳸� �̾��.


void insertionSort(int arr[], int size) {
	int i, key, j;
	for (int i = 1; i < size; i++) {
		
		
		key = arr[i];
		printf("key : %d\n", key);
		j = i - 1;
		
		while (j>=0 && arr[j] > key) {//arr[j]<=key�̸� �� ���߰�
			arr[j + 1] = arr[j];// �ϳ��� �ڷ� �и�
			j=j-1;// j==0�� �Ǹ� while ����
		}
		printf("J : %d\n", j);
		arr[j + 1] = key;//while���� ���߰� key���� �ֱ� 
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main_4(void) {


	int arr1[] = {12, 11, 13, 5, 6};
	int size = sizeof(arr1) / sizeof(arr1[0]);

	


		
	
	insertionSort(arr1, size);


	




	return 0;
}

