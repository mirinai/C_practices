#include <stdio.h>
//큐(Queue)
//입구와 출구가 각각 1개씩인 자료구조(먼저 들어간 데이터가 먼저 나오는 구조)

//front 
//-Dequeue : front가 가리키는 위치에 있는 원소를 없앤다

//rear
//-Enqueue : rear이 가리키는 위치에 원소를 삽입한다.

//선형 큐의 단점
//- 큐에서 삽입과 삭제를 거듭하면 큐가 비어있어도 빈 곳에 원소를 넣지 못하는 상황이 일어남
//-이 때문에 빈 공간을 쓸 수 없는 문제점이 생김

//원형 큐
//
//
//
//상수 선언방법
//1. define		exam) #define PI 3.141592 
//2. const		exam) const double PI=3.141592

//define -> 그냥 치환시킴
//const -> 변수를 상수로 인식하게 됨 -> 상수 하나를 이어서 돌려쓴다.
//  
#define QUEUE_MAX_SIZE 5

typedef struct {
	int items[QUEUE_MAX_SIZE];//queue에 실제로 저장되는 곳
	int front, rear;//queue에 앞과 뒤를 가리키는 인덱스


}CircularQueue;

//queue 초기화하는 함수
void initQueue(CircularQueue* c) {
	c->front = -1;
	c->rear = -1;
}
//큐가 가득 찼는지 확인하는 함수
int isFull(CircularQueue* q) {
	return (q->rear + 1) % QUEUE_MAX_SIZE == q->front;//rear 다음의 위치가 front와 같으면 큐가 가득 참
	//exam) (4+1) % 5(QUEUE_MAX_SIZE) == 0 -> true(1) 가득 참

}
int isEmpty(CircularQueue* q) {
	return q->front == -1;//front가 -1이면 빈 상태
}

//큐에 요소를 넣는 함수
void enqueue(CircularQueue* q, int element) {
	if (isFull(q)) {//queue가 가득 찼는지 확인
		printf("Queue is full\n");

	}
	else {
		if (isEmpty(q)) {//queue가 비어있으면 front를 0으로 설정
			q->front = 0;
		}

		(*q).rear = (q->rear + 1) % QUEUE_MAX_SIZE;// rear의 위치를 다음위치로 이동
		//exam) (4+1) % 5(QUEUE_MAX_SIZE) -> 0번째 인덱스로 이동
		q->items[q->rear] = element;//새 요소가 큐에 넣음


	}
}

//큐에서 요소를 없애는 함수
int dequeue(CircularQueue* q) {
	if (isEmpty(q)) {
		printf("Queue is empty\n");
		return -1;
	}
	else {
		int element = q->items[q->front];
		if ((*q).front == q->rear) {//큐에 요소가 하나만 있으면 큐를 다시 비어있는 상태로 초기화
			initQueue(q);// -1로 둘다 초기화 ->비어있게 만듦
		}
		else {
			q->front = (q->front + 1) % QUEUE_MAX_SIZE;//front를 다음 위치로 이동
			//exam) (4+1) % 5(QUEUE_MAX_SIZE) -> 0번째 인덱스로 이동

		}

		printf("Deleted -> %d\n", element);
		return element;
	}

}
void printQueue(CircularQueue* q) {
	//큐가 비어있지 않는지 확인
	//비어있지 않다면
	printf("큐 출력\n");
	int i;
	for (i = q->front; i != q->rear; i=(i+1) % QUEUE_MAX_SIZE) {
		printf("%d index : %d\n", i, q->items[i]); //front부터 rear앞까지 출력

	}
	printf("%d index : %d\n", i+1, q->items[q->rear]);//마지막 요소 출력

}

int main_2(void) {

	CircularQueue q;
	initQueue(&q);//rear : -1, front : -1

	//요소를 추가하는 함수
	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);
	enqueue(&q, 4);
	enqueue(&q, 5);
	enqueue(&q, 6);
	printQueue(&q);
	//queue의 상태를 출력
	dequeue(&q);
	dequeue(&q);
	printQueue(&q);
	enqueue(&q, 7);
	printQueue(&q);

	return 0;
}