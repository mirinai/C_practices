#include <stdio.h>
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
//첫번째 노드값 출력
void printFirstNodeValue(Node* head) {
	if (head != NULL) {
		printf("%d\n", head->data);
	}
	else {
		printf("list is empty\n");
	}
}
//연결리스트 맨 앞에 노드 넣기
Node* input_in_list_of_the_front(Node* head,int data) {

	Node* newNode = createNode(data);

	(*(newNode)).next = head;
	return newNode;



	
}

//연결리스트 맨 뒤 값 없애기
void deleteLastNode(Node* head) {
	//리스트가 빈 경우
	if (head == NULL) {
		printf("list is empty\n");
		return;
	}
	//리스트에 노드가 하나만 있는 경우
	if (head->next == NULL) {
		free(head);
		head = NULL;
		return;
	}
	//마지막에서 두번째 노드 찾기
	Node* temp = head;
	while (temp->next->next != NULL) {
		temp = temp->next;
	}
	//마지막 노드 해제하고 마지막에서 두번째 노드의 next를 NULL로 고정
	free(temp->next);
	temp->next = NULL;

}


int main(void) {
	//1.연결리스트의 값 출력하기
	Node* linked_list1 = NULL;
	linked_list1 = addNode(linked_list1, 1);
	linked_list1 = addNode(linked_list1, 2);
	linked_list1 = addNode(linked_list1, 3);
	printf("linked_list1의 첫번째 값 : %d\n", (*(linked_list1)).data);//1
	printf("linked_list1의 두번째 값 : %d\n", (*(linked_list1)).next->data);//2
	printf("linked_list1의 두번째 값 : %d\n", (*(linked_list1)).next->next->data);//3
	printf("\n=======\n");
	//2. 연결리스트 맨 앞에 있는 노드 추가하기
	//-> 새로운 노드 -> 첫번째 노드를 새로운 노드가 가리키게 해야함
	
	linked_list1 = input_in_list_of_the_front(linked_list1, 4);
	printf("linked_list1의 첫번째 값 : %d\n", (*(linked_list1)).data);//4
	printf("linked_list1의 두번째 값 : %d\n", (*(linked_list1)).next->data);//1
	printf("linked_list1의 세번째 값 : %d\n", (*(linked_list1)).next->next->data);//2
	printf("linked_list1의 네번째 값 : %d\n", (*(linked_list1)).next->next->next->data);//3
	printf("\n=======\n");
	
	//3.
	deleteLastNode(linked_list1);
	printf("linked_list1의 첫번째 값 : %d\n", (*(linked_list1)).data);//4
	printf("linked_list1의 두번째 값 : %d\n", (*(linked_list1)).next->data);//1
	printf("linked_list1의 세번째 값 : %d\n", (*(linked_list1)).next->next->data);//2
	printf("linked_list1의 네번째 값 : %d\n", (*(linked_list1)).next->next->next->data);//출력안됨
	
	
	
	
	
	
	return 0;





}