#include <stdio.h>
#include <stdlib.h>
//stack�� �迭 ������� �����ϱ�

//1. �迭�� ũ��, top ��������� �� �ִ� struct����
//2. initStack �Լ��� �ϳ� �ø��� ���� top��ġ�� �����ϵ��� ����
//3. push : top�� �ϳ� ���̰� ���� top��ġ�� �����ϵ��� ����
//4. pop : top�� �ϳ� ���̱�(������ ������ �ƴ� "���� ����", ���� ��� top���� ��������)

// initStack( stack ����ü �ʱ�ȭ �Լ�)
// isEmpty( stack�� ����ִ��� Ȯ���ϴ� �Լ�)
// isFull(stack�� ��á���� Ȯ���ϴ� �Լ�)
// push(�����͸� �ִ� �Լ�)
// pop(������ ���ְ� �ǵ����ִ� �Լ�)
// peek(������ �� �� ��� �����Լ�)

typedef struct {
	int items[5];
	int top;
}Stack;

//stack ����ü �ʱ�ȭ �Լ�
void initStack(Stack* s) {
	s->top = -1;//������ top�� -1�� �ʱ�ȭ�ؼ� ������ ��������� ��Ÿ��
}

//stack�� ����ִ��� Ȯ���ϴ� �Լ�
int isEmpty(Stack* s) {



	return s->top == -1;//top�� -1�̸� ������ ��� �ִ� ������ �ϰ� 1�� �ǵ�����, �ƴϸ� 0����

}
//stack�� ��á���� Ȯ���ϴ� �Լ�
int isFull(Stack* s) {
	return s->top == 5 - 1;// top�� �迭�� �ִ� �ε���(length-1)�� ������ ������ ������������ 1����, �ƴϸ� 0����

}
// a++, a-- : ����������
// ���� ������ ���� ������ ��, �� ���� 1�ø��ų� ����

//++a,--a : ����������
// ���� ������ ���� 1 �ø��ų� ���� ��, �� ���� ������


//���ÿ� ��Ҹ� �����ϴ� �Լ� (push)
//�����͸� �ִ� �Լ�
void push(Stack* s, int value) {
	if (isFull(s)) {
		printf("stack is full\n");
	}
	else {
		s->items[++s->top] = value;//���� ž�� �ø��� ���� ����

	}
}


//���ÿ��� ������ ���ְ� �ǵ����ִ� �Լ�
int pop(Stack* s) {
	if (isEmpty(s)) {//���� ����ִ��� Ȯ��
		printf("Stack is empty\n");
		return -1;
	}
	else {
		return s->items[s->top--];//top�� ��ġ�� ���� ������ �ڿ� top�� ����(�������� ���ֱ�)
	}
}

//������ �� �� ��� �����Լ�
int peek(Stack* s) {
	if (isEmpty(s)){//��������� 1���� �ƴϸ� 0����
		printf("Stack is empty\n");//������ ��������� �޼��� ����ϰ� -1����
		return -1; //�����ڵ�

	}
	else {
		printf("Stack elements : \n");

		return s->items[s->top];//������ �� ��������� top��ġ�� ������Ʈ ����
	}


}
//������ ��� ��Ҹ� ����ϴ� �Լ�
void printStack(Stack* s) {

	if (isEmpty(s)) {
		printf("Stack is empty\n");//������ ��������� �޼��� ���
	}
	else {

		for (int i = 0; i <= s->top; i++) {

			printf("������ ��� %d(�ε���) : %d\n", i, s->items[i]);

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
