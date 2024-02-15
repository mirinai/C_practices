#include <stdio.h>

//삽입정렬
//-특정원소의 앞에 있는 원소들이 이미 정렬되어있다는 가정아래에
//적절한 위치에 특정원소를 삽입할수 있도록 비교해가며 정렬하는 알고리즘

//현재 원소가 앞의 원소보다 클때, 이미 앞의 원소들이 정렬되어있다는 가정으로 비교를 멈추고 다음 원소로 넘어감
//어쩌면 현재 원소의 값이 앞의 원소보다 작다면, 적절한 위치를 찾아 삽입하기 위해 앞의 원소들과 비교를 이어간다.


void insertionSort(int arr[], int size) {
	int i, key, j;
	for (int i = 1; i < size; i++) {
		
		
		key = arr[i];
		printf("key : %d\n", key);
		j = i - 1;
		
		while (j>=0 && arr[j] > key) {//arr[j]<=key이면 또 멈추고
			arr[j + 1] = arr[j];// 하나씩 뒤로 밀림
			j=j-1;// j==0이 되면 while 멈춤
		}
		printf("J : %d\n", j);
		arr[j + 1] = key;//while문이 멈추고 key값을 넣기 
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

