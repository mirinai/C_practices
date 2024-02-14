#include <stdio.h>
#include <stdlib.h>
//stack을 배열 기반으로 구현하기

//1. 배열의 크기, top 멤버변수가 들어가 있는 struct선언
//2. initStack 함수로 하나 늘리고 값을 top위치에 저장하도록 구현
//3. push : top을 하나 줄이고 값을 top위치에 저장하도록 구현
//4. pop : top을 하나 줄이기(물리적 삭제가 아닌 "논리적 삭제", 원래 어딘가 top값은 남아있음)

// initStack( stack 구조체 초기화 함수)
// isEmpty( stack이 비어있는지 확인하는 함수)
// isFull(stack이 꽉찼는지 확인하는 함수)
// push(데이터를 넣는 함수)
// pop(데이터 없애고 되돌려주는 함수)
// peek(스택의 맨 위 요소 리턴함수)

typedef struct {
	int items[5];
	int top;
}Stack;

//stack 구조체 초기화 함수
void initStack(Stack* s) {
	s->top = -1;//스택의 top을 -1로 초기화해서 스택이 비어있음을 나타냄
}

//stack이 비어있는지 확인하는 함수
int isEmpty(Stack* s) {



	return s->top == -1;//top이 -1이면 스택이 비어 있는 것으로 하고 1을 되돌려줌, 아니면 0리턴

}
//stack이 꽉찼는지 확인하는 함수
int isFull(Stack* s) {
	return s->top == 5 - 1;// top이 배열의 최대 인덱스(length-1)와 같읍면 스택이 가득찬것으로 1리턴, 아니면 0리턴

}
// a++, a-- : 후위연산자
// 먼저 변수의 값을 참조한 뒤, 그 값을 1올리거나 내림

//++a,--a : 전위연산자
// 먼저 변수의 값을 1 올리거나 내린 뒤, 그 값을 참조함


//스택에 요소를 삽입하는 함수 (push)
//데이터를 넣는 함수
void push(Stack* s, int value) {
	if (isFull(s)) {
		printf("stack is full\n");
	}
	else {
		s->items[++s->top] = value;//먼저 탑을 올리고 값을 넣음

	}
}


//스택에서 데이터 없애고 되돌려주는 함수
int pop(Stack* s) {
	if (isEmpty(s)) {//값이 비어있는지 확인
		printf("Stack is empty\n");
		return -1;
	}
	else {
		return s->items[s->top--];//top의 위치의 값을 리턴한 뒤에 top을 줄임(논리적으로 없애기)
	}
}

//스택의 맨 위 요소 리턴함수
int peek(Stack* s) {
	if (isEmpty(s)){//비어있을때 1리턴 아니면 0리턴
		printf("Stack is empty\n");//스택이 비어있으면 메세지 출력하고 -1리턴
		return -1; //오류코드

	}
	else {
		printf("Stack elements : \n");

		return s->items[s->top];//스택이 안 비어있으면 top위치의 엘레멘트 리턴
	}


}
//스택의 모든 요소를 출력하는 함수
void printStack(Stack* s) {

	if (isEmpty(s)) {
		printf("Stack is empty\n");//스택이 비어있으면 메세지 출력
	}
	else {

		for (int i = 0; i <= s->top; i++) {

			printf("스택의 요소 %d(인덱스) : %d\n", i, s->items[i]);

		}
	}
}

int main_1(void) {

	Stack s1, s2;

	initStack(&s1);
	initStack(&s2);

	push(&s1,1);
	push(&s1,2);
	push(&s1,3);

	push(&s2, 10);
	push(&s2, 20);
	push(&s2, 30);
	pop(&s1);

	printf("stack1 : \n");
	printStack(&s1);

	printf("stack2 : \n");
	printStack(&s2);
	//printf("%d\n", peek(&s1));


	return 0;
}
