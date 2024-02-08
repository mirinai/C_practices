#include <stdio.h>

//1. Person�� �����ϰ� �̸�(name)�� ����(age)�� ����� ������ ��
//�׸��� Person Ÿ���� ������ ����� �̸��� "Alice", ���̴� 30���� �ʱ�ȭ �׸��� ���

//2. Employee����ü�� �����ϰ� �̸�(name), ����(position), �׸��� �޿�(salary)�� ����� ������ �ϱ�
//EmployeeŸ���� �����͸� �Ű������� �޾� �޿��� 10% �ø��� �Լ� raiseSalary�� �����
//main�Լ����� EmployeeŸ���� ������ �ϳ� ����� �˸°� �ʱ�ȭ�� ��
//raiseSalay�Լ��� ȣ���ؼ� �޿� �λ� ���� ���� ����ϱ�


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
	Person per;//�ּҰ� �־�� �ϱ� ������
	
	Person* personp=NULL;
	personp = &per;
	(*personp).name = "Alice";
	personp->age = 30;
	printf("�̸� : %s, ���� : %d\n", personp->name, personp->age);

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