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

typedef struct Node {
	int data;//��忡 ����� ������
	struct Node* next;//���� ��忡 ����Ű�� ������
}Node;

Node* head = NULL;
int size = 0;

Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));// �� ��忡 �޸� �Ҵ�

	newNode->data = data;//��忡 ������ ����
	newNode->next = NULL;//���� ��尡 ������ ��Ÿ���� ���ؼ� NULL�� ����

	return newNode;//������ ����� ������ ��ȯ
}

Node* addNode(Node* head, int data) {

	Node* newNode = createNode(data);//���ο� ��� ����

	if (head == NULL) {//����Ʈ�� ��������� �� ��带 �����ϱ� ���ؼ� head == NULLȮ��
		return newNode;
	}
	Node* temp = head;//�ӽ������� �ϳ� ����
	while (temp->next != NULL) {//
		temp = temp->next;

	}
	temp->next = newNode;
	return head;

}
//����Ʈ ��� ���� �Լ�
//	������ �����͸� ���� ��带 ã�Ƽ� ���ְ� ���ο� head�����͸� �����ϴ� �Լ�
Node* deleteNode(Node* head, int data) {
	Node* temp = head, * prev = NULL;

	if (temp != NULL && temp->data == data) {
		head = temp->next;//head ��带 �����ؾ� �Ѵ� ���
		free(temp);//���� head��� �޸� ����
		return head;
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


int main(void) {
	head = addNode(head, 1);
	head = addNode(head, 2);
	head = addNode(head, 3);
	printf("����Ʈ ��� �ڿ� ��� �߰� : \n");
	printfList(head);//1 -> 2 -> 3 -> NULL


	return 0;
}