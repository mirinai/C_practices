#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

//�迭
//1. �̸� ũ�⸦ ���س���
//2. ���ӵ� �޸� �ּҸ� ����
//3. ����, Ž�� ����
//3. index�� ����

//���� ����Ʈ
//1. ũ�� ���� �ʿ� ����
//2. ���ӵ� �޸��ּҸ� �� ����
//3. �߰�, ���� ����
//4. Node����

//��� ���� : ���� ����Ʈ�� �⺻ ������ ���� ������ �װ��� ������� �ϴ� ��
//����Ʈ�� ��� �߰� : �����͸� ����Ʈ�� �ֱ����� ��
//����Ʈ���� ��� ���� : �����θ� ���ٷ��� �ϴ� ��
//����Ʈ ��� : ������ Ȯ���Ϸ��� ��
//����Ʈ �˻� : � �����Ͱ� ����Ʈ�� �ִ��� �˾ƺ����� ��

//���Ḯ��Ʈ ���������� �̾��� ������ ���� ������ ���� �����Ϳ� ������带 ����Ű�� next�� ��Ÿ��
//exam) node1 : 1, next -> node2 : 3, next -> node3 : 2, null




typedef struct Node {
	int data;//��忡 ����� ������
	struct Node* next;//���� ��忡 ����Ű�� ������
}Node;



Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));// �� ��忡 �޸� �Ҵ�

	newNode->data = data;//��忡 ������ ���� // �Լ��� ���� data
	newNode->next = NULL;//���� ��尡 ������ ��Ÿ���� ���ؼ� NULL�� ����

	return newNode;//������ ����� ������ ��ȯ
}
//����Ʈ�� ���� ��带 �߰��ϰ�, ���ο� head �����͸� �����ϴ� �Լ�
Node* addNode(Node* head, int data) {

	Node* newNode = createNode(data);//���ο� ��� ����

	if (head == NULL) {//����Ʈ�� ��������� �� ��带 �����ϱ� ���ؼ� head == NULLȮ��
		return newNode;//����Ʈ�� ��������� ����尡 head�� ��
	}
	Node* temp = head;//�ӽ������� �ϳ� ������ ����Ʈ�� ��ȸ
	while (temp->next != NULL) {//������� ������
		temp = temp->next;//���� ���� �̵�

	}
	temp->next = newNode;//������ ����� next�� ������ ����
	return head;//������ ����Ʈ�� head������ ����

}
//����Ʈ ��� ���� �Լ�
//	������ �����͸� ���� ��带 ã�Ƽ� ���ְ� ���ο� head�����͸� �����ϴ� �Լ�
Node* deleteNode(Node* head, int data) {
	Node* temp = head, * prev = NULL;//������ ������ ���ٿ� ������

	if (temp != NULL && temp->data == data) {//
		head = temp->next;//head ��带 �����ؾ� �Ѵ� ���
		free(temp);//���� head��� �޸� ����
		return head;
		//head : ù��° �޸� �ּ� | temp : ù��° �޸� �ּ�
		//head : temp->next(�ι�° �޸� �ּ�) | temp : ù��° �޸� �ּ�
		//return head; | free(temp)
	}
	while (temp != NULL && temp->data != data) {
		prev = temp;		//���� ��带 prev�� ����
		temp = temp->next;//  ���� ���� �̵�

	}
	if (temp == NULL) {//�����͸� ã�� ������ ��
		return head;
	}
	prev->next = temp->next;//������ ��带 ����Ʈ���� ����
	free(temp);//������ ����� �޸� ����
	return head;//������ ����Ʈ�� head������ ����


}

//����Ʈ�� ��� ��带 ��ȸ�ϸ� �����͸� ���
void printfList(Node* head) {
	Node* temp = head;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;

	}
	printf("NULL\n");
}
//Ư�� �����͸� ���� ��带 ã�� �����ϴ� �Լ�
Node* searchList(Node* head, int data) {
	Node* temp = head;//����Ʈ�� ��ȸ�ϱ� ���� �ӽ� ������
	while (temp != NULL) {
		if (temp->data == data) {
			return temp; //�ٶ�� �����͸� ã�� ���
		}
		temp = temp->next;//���� ���� �̵�
	}
	return NULL;//�����͸� ã�� ���� ��� NULL����

}
//����Ʈ�� ��� ������ �����ϴ� �Լ�
int lengthOfList(Node* head) {
	int num = 0;
	Node* temp = head;

	while (temp != NULL) {
		num++;
		temp = temp->next;

	}
	return num;


}
//����Ʈ ��ü�� ���ִ� �Լ�
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
//ù��° ��尪 ���
void printFirstNodeValue(Node* head) {
	if (head != NULL) {
		printf("%d\n", head->data);
	}
	else {
		printf("list is empty\n");
	}
}
//���Ḯ��Ʈ �� �տ� ��� �ֱ�
Node* input_in_list_of_the_front(Node* head,int data) {

	Node* newNode = createNode(data);

	(*(newNode)).next = head;
	return newNode;



	
}

//���Ḯ��Ʈ �� �� �� ���ֱ�
void deleteLastNode(Node* head) {
	//����Ʈ�� �� ���
	if (head == NULL) {
		printf("list is empty\n");
		return;
	}
	//����Ʈ�� ��尡 �ϳ��� �ִ� ���
	if (head->next == NULL) {
		free(head);
		head = NULL;
		return;
	}
	//���������� �ι�° ��� ã��
	Node* temp = head;
	while (temp->next->next != NULL) {
		temp = temp->next;
	}
	//������ ��� �����ϰ� ���������� �ι�° ����� next�� NULL�� ����
	free(temp->next);
	temp->next = NULL;

}


int main(void) {
	//1.���Ḯ��Ʈ�� �� ����ϱ�
	Node* linked_list1 = NULL;
	linked_list1 = addNode(linked_list1, 1);
	linked_list1 = addNode(linked_list1, 2);
	linked_list1 = addNode(linked_list1, 3);
	printf("linked_list1�� ù��° �� : %d\n", (*(linked_list1)).data);//1
	printf("linked_list1�� �ι�° �� : %d\n", (*(linked_list1)).next->data);//2
	printf("linked_list1�� �ι�° �� : %d\n", (*(linked_list1)).next->next->data);//3
	printf("\n=======\n");
	//2. ���Ḯ��Ʈ �� �տ� �ִ� ��� �߰��ϱ�
	//-> ���ο� ��� -> ù��° ��带 ���ο� ��尡 ����Ű�� �ؾ���
	
	linked_list1 = input_in_list_of_the_front(linked_list1, 4);
	printf("linked_list1�� ù��° �� : %d\n", (*(linked_list1)).data);//4
	printf("linked_list1�� �ι�° �� : %d\n", (*(linked_list1)).next->data);//1
	printf("linked_list1�� ����° �� : %d\n", (*(linked_list1)).next->next->data);//2
	printf("linked_list1�� �׹�° �� : %d\n", (*(linked_list1)).next->next->next->data);//3
	printf("\n=======\n");
	
	//3.
	deleteLastNode(linked_list1);
	printf("linked_list1�� ù��° �� : %d\n", (*(linked_list1)).data);//4
	printf("linked_list1�� �ι�° �� : %d\n", (*(linked_list1)).next->data);//1
	printf("linked_list1�� ����° �� : %d\n", (*(linked_list1)).next->next->data);//2
	printf("linked_list1�� �׹�° �� : %d\n", (*(linked_list1)).next->next->next->data);//��¾ȵ�
	
	
	
	
	
	
	return 0;





}