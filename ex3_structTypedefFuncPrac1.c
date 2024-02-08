#include <stdio.h>

//1. Person을 정의하고 이름(name)과 나이(age)를 멤버로 가지게 함
//그리고 Person 타입의 변수를 만들고 이름은 "Alice", 나이는 30으로 초기화 그리고 출력

//2. Employee구조체를 정의하고 이름(name), 직급(position), 그리고 급여(salary)를 멤버로 가지게 하기
//Employee타입의 포인터를 매개변수로 받아 급여를 10% 올리는 함수 raiseSalary를 만들기
//main함수에서 Employee타입의 변수를 하나 만들고 알맞게 초기화한 뒤
//raiseSalay함수를 호출해서 급여 인상 뒤의 값을 출력하기


//1.
typedef struct {
	char* name;
	int age;
}Person;

typedef struct {
	char* name;
	char* position;
	float salary;
}Employee;

void raiseSalary(Employee* e) {
	(*e).salary = (e->salary) * 1.10;
}


int main_3(void) {
	Person per;//주소가 있어야 하기 때문에
	
	Person* personp=NULL;
	personp = &per;
	(*personp).name = "Alice";
	personp->age = 30;
	printf("이름 : %s, 나이 : %d\n", personp->name, personp->age);

	printf("\n");
	printf("---------------------\n");
	printf("\n");

	Employee alice = {"Alice","manager",500000.0};
	printf("name : %s, position : %s, befor raising : %.2f\n", alice.name, alice.position, alice.salary);
	//name : Alice, position : manager, befor raising : 500000.00
	raiseSalary(&alice);
	printf("after raising : %.2f\n", alice.salary);//after raising : 550000.00


	return 0;
}