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
	//1. 정수를 원소로 하는 배열을 동적으로 할당하고, 할당할 때 size도 받아서 하기
	//유저로부터 입력받은 숫자를 배열에 저장한 뒤 출력하는 프로그램 만들기
	int* arr2;
	int size2;
	printf("입력받을 숫자의 수 : ");
	scanf("%d", &size2);
	arr2 = (int*)malloc(size2 * sizeof(int));
	
	for (int i = 0; i < size2; i++) {
		printf("입력받을 숫자 : ");
		scanf("%d", &arr2[i]);
	}
	for (int i = 0; i < size2; i++) {
		printf("%d ", arr2[i]);
		
	}
	free(arr2);

	printf("\n");

	printf("\n");
	printf("-------------------------\n");
	//2. Student 구조체를 동적으로 할당하고 사용자로부터 각 멤버변수의 값을 입력 받아 출력하는 프로그램을 만들기
	//-> sizeof(구조체이름)
	printf("입력할 사람 수 : ");
	scanf("%d", &size2);

	Student* arr3;
	arr3 = (Student*)malloc(size2 * sizeof(Student));
	//printf("Student의 크기 : %d\n", sizeof(Student));
	for (int i = 0; i < size2; i++) {
		arr3[i].name = (char*)malloc(50 * sizeof(char));//구조체 안의 포인터 메모리 할당
		printf("이름과 나이 입력(띄어쓰기) : ");
		scanf("%s %d", arr3[i].name, &arr3[i].age);

	}
	printf("\n");
	for (int i = 0; i < size2; i++) {
		printf("%d. 이름 : %s, 나이 : %d\n", i+1,(*(arr3+i)).name, (*(arr3+i)).age);
	}
	free(arr3);




	//3. 입력받은 정수n에 1부터 n까지의 정수를 원소로 가지는 배열을 동적 할당하고 출력하는 프로그램을 만들기
	int* arr4;
	int n;
	printf("1부터 정수n까지 출력할 n 입력(길이이기도 함) : ");
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
