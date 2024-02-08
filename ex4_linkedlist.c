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

typedef struct Node {
	int data;//노드에 저장될 데이터
	struct Node* next;//다음 노드에 가리키는 포인터
}Node;

Node* head = NULL;
int size = 0;

Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));// 새 노드에 메모리 할당

	newNode->data = data;//노드에 데이터 저장
	newNode->next = NULL;//다음 노드가 없음을 나타내기 위해서 NULL로 지정

	return newNode;//생성된 노드의 포인터 반환
}

Node* addNode(Node* head, int data) {

	Node* newNode = createNode(data);//새로운 노드 생성

	if (head == NULL) {//리스트가 비어있으면 새 노드를 리턴하기 위해서 head == NULL확인
		return newNode;
	}
	Node* temp = head;//임시포인터 하나 생성
	while (temp->next != NULL) {//
		temp = temp->next;

	}
	temp->next = newNode;
	return head;

}
//리스트 노드 삭제 함수
//	지정된 데이터를 가진 노드를 찾아서 없애고 새로운 head포인터를 리턴하는 함수
Node* deleteNode(Node* head, int data) {
	Node* temp = head, * prev = NULL;

	if (temp != NULL && temp->data == data) {
		head = temp->next;//head 노드를 삭제해야 한느 경우
		free(temp);//원래 head노드 메모리 해제
		return head;
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


int main(void) {
	head = addNode(head, 1);
	head = addNode(head, 2);
	head = addNode(head, 3);
	printf("리스트 출력 뒤에 노드 추가 : \n");
	printfList(head);//1 -> 2 -> 3 -> NULL


	return 0;
}