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
int main(void) {
	Node* linkedList1 = NULL;

	//��� �߰�
	linkedList1 = addNode(linkedList1, 1);
	linkedList1 = addNode(linkedList1, 2);
	linkedList1 = addNode(linkedList1, 3);
	printf("����Ʈ ��� �ڿ� ��� �߰� : \n");
	printfList(linkedList1);//1 -> 2 -> 3 -> NULL
	printf("\n");
	//��� ����
	linkedList1 = deleteNode(linkedList1, 2);//�����Ͱ� 2�� ��� ���ֱ�
	printf("2�� ���� �� ����Ʈ ��� : \n");
	printfList(linkedList1);//1 -> 3 -> NULL
	printf("\n");

	//����Ʈ �˻�
	Node* foundNode = searchList(linkedList1,3);
	if (foundNode != NULL) {
		printf("������ 3�� ���� ��带 ã��\n");
	}
	else {
		printf("������ 3�� ���� ��� �� ã��\n");
	}
	printf("-----------------\n");

	Node* linkedList2 = NULL;
	linkedList2 = addNode(linkedList2, 10);
	linkedList2 = addNode(linkedList2, 4);
	linkedList2 = addNode(linkedList2, 2);
	linkedList2 = addNode(linkedList2, 7);
	linkedList2 = addNode(linkedList2, 6);
	//1.����Ʈ ���� ����
	printf("����Ʈ�� ���� : %d\n", lengthOfList(linkedList2)); //����Ʈ�� ���� : 5
	printf("\n");
	//2.����Ʈ �� ��� ���ֱ�
	Node* linkedList3 = NULL;//�ӽ÷� ���� ����ü ������ ����
	linkedList3 = ReleaseListReturn(linkedList2);
	printfList(linkedList3);//NULL

	return 0;
}