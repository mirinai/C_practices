#include <stdio.h>


//����, ����
//�����˻�
// -> ���� ������ �˻� �˰���, �迭�� ó������ ������ ������� �ϳ��� �˻��ؼ� ã���� �ϴ� ���� ã�� ���

int linear_search(int arr[], int n, int x) {
	for (int i = 0;i < n; i++) {
		if (arr[i] == x) {
			return x;
		}
	}
	return -1;
}

//�����˻�
// -> �߰��� ���� ��� ã���� �ϴ� ���� ���� ã�� ���� �߰������� ������ ���� ���� �迭����,
//ũ�ٸ� ������ ���� �迭���� �˻��� �̾ �ϴ� ���

int binary_search(int arr[], int l, int r, int x) {//l : left, r : right, x : search value

	if (r >= l) {
		int mid = l + (r - l) / 2;//��� ��ġ ���
		if (arr[mid] == x) {//ã���� �ϴ� ���� �߰� ��ġ�� ���� ��
			return x;
		}
		else if (arr[mid] > x) {//ã�� ���� �߰� ������ ������ ���� ���� �迭���� �˻�
			return binary_search(arr, l, mid - 1,x);
		}
		else {
			return binary_search(arr, mid + 1,r, x);//ã�� ���� �߰������� ũ�� ������ ���� �迭���� �˻�
		}

	}
	return -1;

}

int main_7(void) {
	int arr[] = { 20,35,12,8,55 };

	int n = sizeof(arr) / sizeof(arr[0]);//����
	int x = 55;//ã�� ��
	int result = linear_search(arr, n, x);//�˻�

	if (result == -1) {
		printf("ã�� ���� �迭�� ������� �ʽ��ϴ�.\n");
	}
	else {
		printf("ã�� �� : %d\n", result);
	}

	int arr2[] = { 2,3,4,10,20 };
	n = sizeof(arr2) / sizeof(arr2[0]);
	int x2 = 10;
	int result2 = binary_search(arr2, 0, n-1, x2);

	if (result2 == -1) {
		printf("ã�� ���� �迭�� ������� �ʽ��ϴ�.\n");
	}
	else {
		printf("ã�� �� : %d\n", result2);
	}

	return 0;
}