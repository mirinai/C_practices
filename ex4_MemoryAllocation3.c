#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char* name;
	int age;
}Student;


int main(void) {

	int* arr1;

	int size1 = 3, i;

	arr1 = (int*)malloc(size1 * sizeof(int));

	for (i = 0; i < size1; i++) {
		arr1[i] = i * 10;
		printf("%d ", arr1[i]);//0 10 20
	}
	free(arr1);

	printf("\n");
	printf("-------------------------\n");
	printf("\n");
	//1. ������ ���ҷ� �ϴ� �迭�� �������� �Ҵ��ϰ�, �Ҵ��� �� size�� �޾Ƽ� �ϱ�
	//�����κ��� �Է¹��� ���ڸ� �迭�� ������ �� ����ϴ� ���α׷� �����
	int* arr2;
	int size2;
	printf("�Է¹��� ������ �� : ");
	scanf("%d", &size2);
	arr2 = (int*)malloc(size2 * sizeof(int));
	
	for (int i = 0; i < size2; i++) {
		printf("�Է¹��� ���� : ");
		scanf("%d", &arr2[i]);
	}
	for (int i = 0; i < size2; i++) {
		printf("%d ", arr2[i]);
		
	}
	free(arr2);

	printf("\n");

	printf("\n");
	printf("-------------------------\n");
	//2. Student ����ü�� �������� �Ҵ��ϰ� ����ڷκ��� �� ��������� ���� �Է� �޾� ����ϴ� ���α׷��� �����
	//-> sizeof(����ü�̸�)
	printf("�Է��� ���� : ");
	scanf("%d", &size2);

	Student* arr3;
	arr3 = (Student*)malloc(size2 * sizeof(Student));
	for (int i = 0; i < size2; i++) {
		arr3[i].name = (char*)malloc(50 * sizeof(char));
		printf("�̸� �Է� ���� �Է�(����) : ");
		scanf("%s %d", arr3->name,&arr3->age);

	}
	printf("\n");
	for (int i = 0; i < size2; i++) {
		printf("�̸� : %s, ���� : %d\n", (*arr3).name, arr3->age);
	}
	free(arr3);




	//3. �Է¹��� ����n�� 1���� n������ ������ ���ҷ� ������ �迭�� ���� �Ҵ��ϰ� ����ϴ� ���α׷��� �����
	int* arr4;
	int n;
	printf("1���� ����n���� ����� n �Է�(�����̱⵵ ��) : ");
	scanf("%d", &n);
	arr4 = (int*)malloc(n * sizeof(int));

	for (int i = 1; i <= n; i++) {
		arr4[i - 1] = i;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr4[i]);
	}
	free(arr4);



	return 0;
}