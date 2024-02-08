#include <stdio.h>
#include <stdlib.h>

//stack
// 권한 : 생성
//	지역변수
//	heap
//권한 : 생성, 삭제, 수정
//	동적할당
//	data
//권한 : 생성,
//	전역변수
//	code
// 

//메모리 영역
//1. 코드 영역
//2. 데이터 영역
//3. 스택 영역
//4. 힙 영역

//1. 코드 영역 : 프로그램의 실행 코드(문법), 함수, 조건문, 반복문 등 동작하는 것들이 저장되는 곳
// -> 프로그램의 동작을 결정하는 중요한 지시사항을 포함하고 있기 때문에, 못 고침
//
//2. 데이터 영역 : 전역변수, 정적변수를 저장하는 공간, 프로그램 모든 곳에서 공유되는 데이터
//-> 전역변수랑 정적변수가 여러함수에서 접근할수 있기 때문에, 이 데이터들의 크기를 바꾸거나
// 메모리를 직접 관리할 수 있다면, 다른 함수들이 예상치 못한 동작을 할수있기 때문 -> 못 고침
//
//3. 스택 영역 : 함수의 호출과 함께 생기는 지역 변수,매개변수, 반환주소가 저장됨
//-> 함수의 호출, 끝에 따라서 알아서 저장됨, 함수 호출 안정성과 일관성이 손상될 위험이 있기 때문에 -> 못 고침
//
//4. 힙 영역 : 동적으로 할당된 변수, 구조체, 배열 등이 저장됨, 프로그래머가 직접 관리함
//-> 힙 영역은 개발자가 동적으로 메모리를 할당하고 해제할 수 있게끔 수정권한이 주어지는 하나밖에 없는 영역 -> 고칠 수 있음

int* createArray() {//리턴의 꼴 : 포인터
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i * 10;
	}
	return arr;
}
int* createArray2() {
	int* arr = (int*)malloc(10 * sizeof(int));

	for (int i = 0; i < 10; i++) {
		arr[i] = i * 10;
	}
	return arr;
}





int main_1(void) {

	int num1=0;
	int* arr1 = createArray();//메모리 할당 안됨
	
	


	for (int i = 0; i < 10; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n\n");


	int* arr2 = createArray2();
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr2[i]);
	}
	free(arr2);


	//char input[5];//배열 : 고정된 크기를 지정
	printf("\n\n");
	int size;
	char* input;
	printf("문자열의 길이 입력 : ");
	scanf("%d", &size);

	input = (char*)malloc((size + 1) * sizeof(char));

	printf("문자열 입력 : ");
	scanf("%s", input);
	printf("입력한 값 : %s\n", input);




	return 0;
}