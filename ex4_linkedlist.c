#include <stdio.h>
#include <stdlib.h>

//배열
//1. 미리 크기를 정해놓음
//2. 연속된 메모리 주소를 받음
//3. 접근, 탐색 쉬움
//3. index를 가짐

//연결 리스트
//1. 크기 정할 필요 없음
//2. 연속된 메모리주소를 안 받음
//3. 추가, 삭제 쉬움
//4. Node가짐

//노드 생성 : 연결 리스트의 기본 단위가 노드기 때문에 그것을 만들려고 하는 것
//리스트에 노드 추가 : 데이터를 리스트에 넣기위한 것
//리스트에서 노드 삭제 : 데이턱를 없앨려고 하는 것
//리스트 출력 : 데이터 확인하려는 것
//리스트 검색 : 어떤 데이터가 리스트에 있는지 알아볼려는 것

//연결리스트 연속적으로 이어진 데이터 구조 각각의 노드는 데이터와 다음노드를 가리키는 next로 나타냄
//exam) node1 : 1, next -> node2 : 3, next -> node3 : 2, null




typedef struct Node {
	int data;//노드에 저장될 데이터
	struct Node* next;//다음 노드에 가리키는 포인터
}Node;



Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));// 새 노드에 메모리 할당

	newNode->data = data;//노드에 데이터 저장 // 함수에 들어온 data
	newNode->next = NULL;//다음 노드가 없음을 나타내기 위해서 NULL로 지정

	return newNode;//생성된 노드의 포인터 반환
}
//리스트의 끝에 노드를 추가하고, 새로운 head 포인터를 리턴하는 함수
Node* addNode(Node* head, int data) {

	Node* newNode = createNode(data);//새로운 노드 생성

	if (head == NULL) {//리스트가 비어있으면 새 노드를 리턴하기 위해서 head == NULL확인
		return newNode;//리스트가 비어있으면 새노드가 head가 됨
	}
	Node* temp = head;//임시포인터 하나 생성해 리스트를 순회
	while (temp->next != NULL) {//비어있지 않으면
		temp = temp->next;//다음 노드로 이동

	}
	temp->next = newNode;//마지막 노드의 next를 새노드로 설정
	return head;//수정된 리스트의 head포인터 리턴

}
//리스트 노드 삭제 함수
//	지정된 데이터를 가진 노드를 찾아서 없애고 새로운 head포인터를 리턴하는 함수
Node* deleteNode(Node* head, int data) {
	Node* temp = head, * prev = NULL;//포인터 변수를 한줄에 여러개
	
	if (temp != NULL && temp->data == data) {//
		head = temp->next;//head 노드를 삭제해야 한느 경우
		free(temp);//원래 head노드 메모리 해제
		return head;
		//head : 첫번째 메모리 주소 | temp : 첫번째 메모리 주소
		//head : temp->next(두번째 메모리 주소) | temp : 첫번째 메모리 주소
		//return head; | free(temp)
	}
	while (temp != NULL && temp->data != data) {
		prev = temp;		//현재 노드를 prev로 지정
		temp = temp->next;//  다음 노드로 이동

	}
	if (temp == NULL) {//데이터를 찾지 못했을 때
		return head;
	}
	prev->next = temp->next;//삭제할 노드를 리스트에서 제외
	free(temp);//삭제할 노드의 메모리 해제
	return head;//수정된 리스트의 head포인터 리턴

	
}

//리스트의 모든 노드를 순회하며 데이터를 출력
void printfList(Node* head) {
	Node* temp = head;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;

	}
	printf("NULL\n");
}
//특정 데이터를 가진 노드를 찾아 리턴하는 함수
Node* searchList(Node* head, int data) {
	Node* temp = head;//리스트를 순회하기 위한 임시 포인터
	while (temp != NULL) {
		if (temp->data == data) {
			return temp; //바라는 데이터를 찾은 경우
		}
		temp = temp->next;//다음 노드로 이동
	}
	return NULL;//데이터를 찾지 못한 경우 NULL리턴

}
//리스트의 노드 갯수를 리턴하는 함수
int lengthOfList(Node* head) {
	int num = 0;
	Node* temp = head;

	while (temp != NULL) {
		num++;
		temp = temp->next;
		
	}
	return num;


}
//리스트 전체를 없애는 함수
Node* ReleaseListReturn(Node* head) {
	

	while (head != NULL) {

		Node* temp = head;
		head = head->next;
		free(temp);

	}
	return head;
}
void ReleaseList(Node* head) {


	while (head != NULL) {

		Node* temp = head;
		head = head->next;
		free(temp);

	}

}
int main(void) {
	Node* linkedList1 = NULL;

	//노드 추가
	linkedList1 = addNode(linkedList1, 1);
	linkedList1 = addNode(linkedList1, 2);
	linkedList1 = addNode(linkedList1, 3);
	printf("리스트 출력 뒤에 노드 추가 : \n");
	printfList(linkedList1);//1 -> 2 -> 3 -> NULL
	printf("\n");
	//노드 삭제
	linkedList1 = deleteNode(linkedList1, 2);//데이터가 2인 노드 없애기
	printf("2를 없앤 뒤 리스트 출력 : \n");
	printfList(linkedList1);//1 -> 3 -> NULL
	printf("\n");

	//리스트 검색
	Node* foundNode = searchList(linkedList1,3);
	if (foundNode != NULL) {
		printf("데이터 3을 가진 노드를 찾음\n");
	}
	else {
		printf("데이터 3을 가진 노드 못 찾음\n");
	}
	printf("-----------------\n");

	Node* linkedList2 = NULL;
	linkedList2 = addNode(linkedList2, 10);
	linkedList2 = addNode(linkedList2, 4);
	linkedList2 = addNode(linkedList2, 2);
	linkedList2 = addNode(linkedList2, 7);
	linkedList2 = addNode(linkedList2, 6);
	//1.리스트 갯수 리턴
	printf("리스트의 개수 : %d\n", lengthOfList(linkedList2)); //리스트의 개수 : 5
	printf("\n");
	//2.리스트 안 모두 없애기
	Node* linkedList3 = NULL;//임시로 만든 구조체 포인터 변수
	linkedList3 = ReleaseListReturn(linkedList2);
	printfList(linkedList3);//NULL

	return 0;
