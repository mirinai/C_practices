#include <stdio.h>
#include <stdlib.h>
//데이터를 계층적으로 표현하기 위한 자료구조
//	- 계층적이라는 의미는 위아래 관계나 포함관계를 명확히 나타내는 것을 뜻함
//	- 예시 : 조직도, 파일시스템 등

//트리의 특징
//	- 비선형 자료구조 : 한 위치에서 비롯해 다음위치로 이어가도 모든 노드를 거칠 수 없음
//	- 계층형 자료구조 : 데이터 사이의 위아래 관계, 그러니까 부모 자식의 관계를 표현

//노드(node) : 트리의 기본단위로, 데이터를 저장함
//루트 노드(Root Node) : 트리의 가장 위에 있으며 하나밖에 없는 노드
//리프 노드(Leaf Node) : 자식이 없는 노드로, 트리의 '말단'에 있음
//엣지(Edge) : 두 노드를 이어주는 선으로, 트리에서 부모-자식 관계를 나타냄
//서브트리(Subtree) : 특정 노드와 그 노드의 모든 후손 노드로 구성된 트리의 한 부분

//자식 노드가 많아도 2개까지 있으면 이진트리로 부름

//이진트리의 순회 방법
//1. 중위 순회
//2. 후위 순회
//3. 전위 순회
// -> 부모를 어떤 순서로 돌아가냐에 따라 나누어진 것

//중위 순회 : 왼쪽 -> 부모 -> 오른쪽 "ㅅ" 시계방향
//후위 순회 : 왼쪽 -> 오른쪽 -> 부모 ">" 시계반대방향
//전위 순회 : 부모 -> 왼쪽 -> 오른쪽 "<" 시계반대방향

//노드가 없으면 그건 무시하고 자식노드의 자식노드를 먼저 서브트리로 거치기

typedef struct Node {// 이진트리의 노드를 표현하는 구조체를 정의 
	int data;	//노드의 데이터를 저장하는 정수 필드
	struct Node* left;//왼쪽 자식 노드를 가리키는 structure 포인터
	struct Node* right;//오른쪽 자식을 가리키는 structure 포인터
}Node;

//새로운 노드를 만들고 초기화하는 함수
Node* newNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));// 노드 크기만큼 메모리를 할당
	node->data = data;						// 입력받은 데이터를 노드의 데이터 멤버변수에 저장함
	(*node).left = NULL;					// 왼쪽 자식노드 포인터를 NULL로 초기화
	node->right = NULL;						// 오른쪽 자식노드 포인터를 NULL로 초기화

	return node;
}

Node* insertRight(Node* node, int data) {
	node->right = newNode(data);// 새 노드를 만들고 주어진 노드의 오른쪽 포인터로 설정함
	return node->right; // 새로 삽입된 노드의 포인터를 되돌려줌
}

Node* insertLeft(Node* node, int data) {
	node->left = newNode(data);// 새 노드를 만들고 주어진 노드의 왼쪽 포인터로 설정함
	return node->left; // 새로 삽입된 노드의 포인터를 되돌려줌
}
//중위순회 : 1. 왼쪽, 2. 부모, 3. 오른쪽
void printfInOrder(Node* node) {
	if (node == NULL) return;

	printfInOrder(node->left);
	printf("%d -> ", (*node).data);
	printfInOrder((*node).right);

}

int main_3(void) {

	Node* root = newNode(1);//루트에 1을 넣어줌

	insertLeft(root, 2);//왼쪽노드에 2 넣음
	insertRight(root, 3);//오른쪽 노드에 3 넣음
	//2 -> 1 -> 3 ->

	insertLeft(root->left, 4);//루트를 기준으로 왼쪽노드의 부모에
	insertLeft(root->left->left, 5);//루트를 기준으로 왼쪽노드의 서브트리의 오른쪽노드에 값이 넣어짐
	printfInOrder(root);//5 -> 4 -> 2 -> 1 -> 3 ->
	
	



	return 0;
}
