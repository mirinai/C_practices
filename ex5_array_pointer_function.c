#include <stdio.h>

//1.���� �迭�� �� ũ�⸦ ���ڷ� �޾�, �����͸� �Ἥ �迭 ����� ���� ���� ���ϰ� �ǵ����� �Լ� �����

//�Լ� ���� : int sumArray(int* arr, int size)
int sumArray(int* arr, int size) {
	int* ptr;
	ptr = arr;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + *(ptr + i);
	}
	return sum;
}

//2. ���� �迭�� Ư�� ���� �޾Ƽ�, �� ���� �迭 �ȿ� ��� �������� �ǵ����� �Լ��� �����

//�Լ� ���� : int countValue(int arr[],int size,int value);
int countValue(int arr[], int size, int value) {
	int num=0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			num++;
		}
	}
	return num;
}

//3. ���� �迭�� �迭�� ũ�⸦ �޾Ƽ� ��� ��Ҹ� �ι�� �����ϴ� �Լ��� �����
void TwoTimes(int arr[], int size) {
	printf("3. �迭���� ���� �ι�� �ٲ�\n");
	for (int i = 0; i < size; i++) {
		arr[i] *= 2;
		printf("%d ", arr[i]);
	}

}

//4. ���� �迭�� �迭�� ũ�⸦ �޾Ƽ� �ּڰ��� �����ϴ� �Լ��� �����
int LeastCommonValue(int arr[], int size) {
	int* ptr;
	ptr = arr;
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if ((*(ptr + i)) > (*(ptr + j))) {
				temp= *(ptr + i);
				*(ptr + i)= *(ptr + j);
				*(ptr + j)=temp;

			}
		}

	}
	return arr[0];
}

//5. ���� �迭�� �޾� ��� ��Ҹ� ���������� �� ĭ�� �̵���Ű�� �Լ� �����, �迭�� ������ ��Ҵ�
//�迭�� ù��° ��ġ�� �̵��� -> �̵����Ѽ� �ٲ� -> �Լ� ȣ���� �ڿ� ���
void umjikgim(int arr[],int size) {
	//int size = sizeof(arr) / sizeof(arr[0]);//�����ͷ� �޾Ƶ��� �����ʹ� 8����Ʈ ���� 2�ۿ� �ȳ���
	printf("���� : %d\n", size);
	

	
	int last = arr[size - 1];

	for (int i = size - 1; i > 0; i--) {
		arr[i] = arr[i - 1]; // �� ĭ�� �ڷ� �̵�
	}
	arr[0] = last;
	printf("���������� ��ĭ�� �̵�\n");
	for (int i = 0; i < size; i++) {
		
		printf("%d ", arr[i]);
	}

}

int main(void) {
	//1.���� �迭�� �� ũ�⸦ ���ڷ� �޾�, �����͸� �Ἥ �迭 ����� ���� ���� ���ϰ� �ǵ����� �Լ� �����
	int arr1[5] = { 1,3,5,7,9 };
	int size_arr1 = sizeof(arr1) / sizeof(arr1[0]);
	int result1 = sumArray(arr1, size_arr1);
	printf("1. ���� �� : %d\n", result1);

	printf("\n");
	printf("--------------\n");
	printf("\n");

	//2. ���� �迭�� Ư�� ���� �޾Ƽ�, �� ���� �迭 �ȿ� ��� �������� �ǵ����� �Լ��� �����
	int arr2[10] = { 1,2,1,1,5,7,7,9,9,10 };
	int size_arr2 = sizeof(arr2) / sizeof(arr2[1]);
	int val1;
	printf("2. ��� �� �Է� : ");
	scanf("%d", &val1);

	int result2 = countValue(arr2, size_arr2, val1);
	printf("�迭 �ȿ� �ִ� �Է��� ���� �� : %d\n", result2);

	printf("\n");
	printf("--------------\n");
	printf("\n");

	//3. ���� �迭�� �迭�� ũ�⸦ �޾Ƽ� ��� ��Ҹ� �ι�� �����ϴ� �Լ��� �����
	int arr3[5] = {1,2,3,4,5};
	int size_arr3 = sizeof(arr3) / sizeof(arr3[0]);
	TwoTimes(arr3, size_arr3);

	printf("\n");
	printf("--------------\n");
	printf("\n");
	//4. ���� �迭�� �迭�� ũ�⸦ �޾Ƽ� �ּڰ��� �����ϴ� �Լ��� �����
	int arr4[7] = { 3,5,7,10,15,5,2 };
	int size_arr4 = sizeof(arr4) / sizeof(arr4[0]);
	int result3 = LeastCommonValue(arr4, size_arr4);
	printf("4. arr4�� ���� �ּڰ� : %d\n", result3);

	printf("\n");
	printf("--------------\n");
	printf("\n");
	//5. ���� �迭�� �޾� ��� ��Ҹ� ���������� �� ĭ�� �̵���Ű�� �Լ� �����, �迭�� ������ ��Ҵ�
//�迭�� ù��° ��ġ�� �̵��� -> �̵����Ѽ� �ٲ� -> �Լ� ȣ���� �ڿ� ���
	int arr5[6] = { 1,2,3,4,5,6 };
	int size_arr5 = sizeof(arr5) / sizeof(arr5[0]);
	umjikgim(arr5,size_arr5);





	return 0;
}