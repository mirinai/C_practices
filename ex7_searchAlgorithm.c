#include <stdio.h>


//선형, 이진
//선형검색
// -> 가장 간단한 검색 알고리즘, 배열의 처음부터 끝까지 순서대로 하나씩 검색해서 찾고자 하는 값을 찾는 방법

int linear_search(int arr[], int n, int x) {
	for (int i = 0;i < n; i++) {
		if (arr[i] == x) {
			return x;
		}
	}
	return -1;
}

//이진검색
// -> 중간의 값을 골라서 찾고자 하는 값과 비교해 찾는 값이 중간값보다 작으면 왼쪽 하위 배열에서,
//크다면 오른쪽 하위 배열에서 검색을 이어서 하는 방식

int binary_search(int arr[], int l, int r, int x) {//l : left, r : right, x : search value

	if (r >= l) {
		int mid = l + (r - l) / 2;//가운데 위치 계산
		if (arr[mid] == x) {//찾고자 하는 값과 중간 위치의 값을 비교
			return x;
		}
		else if (arr[mid] > x) {//찾는 값이 중간 값보다 작으면 왼쪽 하위 배열에서 검색
			return binary_search(arr, l, mid - 1,x);
		}
		else {
			return binary_search(arr, mid + 1,r, x);//찾는 값이 중간값보다 크면 오른쪽 하위 배열에서 검색
		}

	}
	return -1;

}

int main_7(void) {
	int arr[] = { 20,35,12,8,55 };

	int n = sizeof(arr) / sizeof(arr[0]);//길이
	int x = 55;//찾는 값
	int result = linear_search(arr, n, x);//검색

	if (result == -1) {
		printf("찾는 값이 배열에 들어있지 않습니다.\n");
	}
	else {
		printf("찾은 값 : %d\n", result);
	}

	int arr2[] = { 2,3,4,10,20 };
	n = sizeof(arr2) / sizeof(arr2[0]);
	int x2 = 10;
	int result2 = binary_search(arr2, 0, n-1, x2);

	if (result2 == -1) {
		printf("찾는 값이 배열에 들어있지 않습니다.\n");
	}
	else {
		printf("찾은 값 : %d\n", result2);
	}

	return 0;
}