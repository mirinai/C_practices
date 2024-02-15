#include <stdio.h>
//ť(Queue)
//�Ա��� �ⱸ�� ���� 1������ �ڷᱸ��(���� �� �����Ͱ� ���� ������ ����)

//front 
//-Dequeue : front�� ����Ű�� ��ġ�� �ִ� ���Ҹ� ���ش�

//rear
//-Enqueue : rear�� ����Ű�� ��ġ�� ���Ҹ� �����Ѵ�.

//���� ť�� ����
//- ť���� ���԰� ������ �ŵ��ϸ� ť�� ����־ �� ���� ���Ҹ� ���� ���ϴ� ��Ȳ�� �Ͼ
//-�� ������ �� ������ �� �� ���� �������� ����

//���� ť
//
//
//
//��� ������
//1. define		exam) #define PI 3.141592 
//2. const		exam) const double PI=3.141592

//define -> �׳� ġȯ��Ŵ
//const -> ������ ����� �ν��ϰ� �� -> ��� �ϳ��� �̾ ��������.
//  
#define QUEUE_MAX_SIZE 5

typedef struct {
	int items[QUEUE_MAX_SIZE];//queue�� ������ ����Ǵ� ��
	int front, rear;//queue�� �հ� �ڸ� ����Ű�� �ε���


}CircularQueue;

//queue �ʱ�ȭ�ϴ� �Լ�
void initQueue(CircularQueue* c) {
	c->front = -1;
	c->rear = -1;
}
//ť�� ���� á���� Ȯ���ϴ� �Լ�
int isFull(CircularQueue* q) {
	return (q->rear + 1) % QUEUE_MAX_SIZE == q->front;//rear ������ ��ġ�� front�� ������ ť�� ���� ��
	//exam) (4+1) % 5(QUEUE_MAX_SIZE) == 0 -> true(1) ���� ��

}
int isEmpty(CircularQueue* q) {
	return q->front == -1;//front�� -1�̸� �� ����
}

//ť�� ��Ҹ� �ִ� �Լ�
void enqueue(CircularQueue* q, int element) {
	if (isFull(q)) {//queue�� ���� á���� Ȯ��
		printf("Queue is full\n");

	}
	else {
		if (isEmpty(q)) {//queue�� ��������� front�� 0���� ����
			q->front = 0;
		}

		(*q).rear = (q->rear + 1) % QUEUE_MAX_SIZE;// rear�� ��ġ�� ������ġ�� �̵�
		//exam) (4+1) % 5(QUEUE_MAX_SIZE) -> 0��° �ε����� �̵�
		q->items[q->rear] = element;//�� ��Ұ� ť�� ����


	}
}

//ť���� ��Ҹ� ���ִ� �Լ�
int dequeue(CircularQueue* q) {
	if (isEmpty(q)) {
		printf("Queue is empty\n");
		return -1;
	}
	else {
		int element = q->items[q->front];
		if ((*q).front == q->rear) {//ť�� ��Ұ� �ϳ��� ������ ť�� �ٽ� ����ִ� ���·� �ʱ�ȭ
			initQueue(q);// -1�� �Ѵ� �ʱ�ȭ ->����ְ� ����
		}
		else {
			q->front = (q->front + 1) % QUEUE_MAX_SIZE;//front�� ���� ��ġ�� �̵�
			//exam) (4+1) % 5(QUEUE_MAX_SIZE) -> 0��° �ε����� �̵�

		}

		printf("Deleted -> %d\n", element);
		return element;
	}

}
void printQueue(CircularQueue* q) {
	//ť�� ������� �ʴ��� Ȯ��
	//������� �ʴٸ�
	printf("ť ���\n");
	int i;
	for (i = q->front; i != q->rear; i=(i+1) % QUEUE_MAX_SIZE) {
		printf("%d index : %d\n", i, q->items[i]); //front���� rear�ձ��� ���

	}
	printf("%d index : %d\n", i+1, q->items[q->rear]);//������ ��� ���

}

int main_2(void) {

	CircularQueue q;
	initQueue(&q);//rear : -1, front : -1

	//��Ҹ� �߰��ϴ� �Լ�
	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);
	enqueue(&q, 4);
	enqueue(&q, 5);
	enqueue(&q, 6);
	printQueue(&q);
	//queue�� ���¸� ���
	dequeue(&q);
	dequeue(&q);
	printQueue(&q);
	enqueue(&q, 7);
	printQueue(&q);

	return 0;
}