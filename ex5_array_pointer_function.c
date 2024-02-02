#include <stdio.h>

//1.정수 배열과 그 크기를 인자로 받아, 포인터를 써서 배열 요소의 더한 값을 구하고 되돌리는 함수 만들기

//함수 선언 : int sumArray(int* arr, int size)
int sumArray(int* arr, int size) {
	int* ptr;
	ptr = arr;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + *(ptr + i);
	}
	return sum;
}

//2. 정수 배열과 특정 값을 받아서, 그 값을 배열 안에 몇번 나오는지 되돌리는 함수를 만들기

//함수 선언 : int countValue(int arr[],int size,int value);
int countValue(int arr[], int size, int value) {
	int num=0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			num++;
		}
	}
	return num;
}

//3. 정수 배열과 배열의 크기를 받아서 모든 요소를 두배로 변경하는 함수를 만들기
void TwoTimes(int arr[], int size) {
	printf("3. 배열안의 값을 두배로 바꿈\n");
	for (int i = 0; i < size; i++) {
		arr[i] *= 2;
		printf("%d ", arr[i]);
	}

}

//4. 정수 배열과 배열의 크기를 받아서 최솟값을 리턴하는 함수를 만들기
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

//5. 정수 배열을 받아 모든 요소를 오른쪽으로 한 칸씩 이동시키는 함수 만들기, 배열의 마직막 요소는
//배열의 첫번째 위치로 이동함 -> 이동시켜서 바꿈 -> 함수 호출한 뒤에 출력
void umjikgim(int arr[],int size) {
	//int size = sizeof(arr) / sizeof(arr[0]);//포인터로 받아들임 포인터는 8바이트 따라서 2밖에 안나옴
	printf("길이 : %d\n", size);
	

	
	int last = arr[size - 1];

	for (int i = size - 1; i > 0; i--) {
		arr[i] = arr[i - 1]; // 한 칸씩 뒤로 이동
	}
	arr[0] = last;
	printf("오른쪽으로 한칸씩 이동\n");
	for (int i = 0; i < size; i++) {
		
		printf("%d ", arr[i]);
	}

}

int main(void) {
	//1.정수 배열과 그 크기를 인자로 받아, 포인터를 써서 배열 요소의 더한 값을 구하고 되돌리는 함수 만들기
	int arr1[5] = { 1,3,5,7,9 };
	int size_arr1 = sizeof(arr1) / sizeof(arr1[0]);
	int result1 = sumArray(arr1, size_arr1);
	printf("1. 더한 값 : %d\n", result1);

	printf("\n");
	printf("--------------\n");
	printf("\n");

	//2. 정수 배열과 특정 값을 받아서, 그 값을 배열 안에 몇번 나오는지 되돌리는 함수를 만들기
	int arr2[10] = { 1,2,1,1,5,7,7,9,9,10 };
	int size_arr2 = sizeof(arr2) / sizeof(arr2[1]);
	int val1;
	printf("2. 어떠한 값 입력 : ");
	scanf("%d", &val1);

	int result2 = countValue(arr2, size_arr2, val1);
	printf("배열 안에 있는 입력한 값의 수 : %d\n", result2);

	printf("\n");
	printf("--------------\n");
	printf("\n");

	//3. 정수 배열과 배열의 크기를 받아서 모든 요소를 두배로 변경하는 함수를 만들기
	int arr3[5] = {1,2,3,4,5};
	int size_arr3 = sizeof(arr3) / sizeof(arr3[0]);
	TwoTimes(arr3, size_arr3);

	printf("\n");
	printf("--------------\n");
	printf("\n");
	//4. 정수 배열과 배열의 크기를 받아서 최솟값을 리턴하는 함수를 만들기
	int arr4[7] = { 3,5,7,10,15,5,2 };
	int size_arr4 = sizeof(arr4) / sizeof(arr4[0]);
	int result3 = LeastCommonValue(arr4, size_arr4);
	printf("4. arr4의 가장 최솟값 : %d\n", result3);

	printf("\n");
	printf("--------------\n");
	printf("\n");
	//5. 정수 배열을 받아 모든 요소를 오른쪽으로 한 칸씩 이동시키는 함수 만들기, 배열의 마직막 요소는
//배열의 첫번째 위치로 이동함 -> 이동시켜서 바꿈 -> 함수 호출한 뒤에 출력
	int arr5[6] = { 1,2,3,4,5,6 };
	int size_arr5 = sizeof(arr5) / sizeof(arr5[0]);
	umjikgim(arr5,size_arr5);





	return 0;
}