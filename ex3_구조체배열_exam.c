#include <stdio.h>
#include <stdlib.h>
//����1��
//'Student'��� �̸��� ����ü�� ������
//�� ����ü�� ������ ������ ����� ������ ��
//	-'name' : �л��� �̸��� �����ϴ� ������
//	-'ID' : �л��� �й��� �����ϴ� ����
//	-'average' : �л��� ��� ������ �����ϴ� �Ǽ�
//2. �����κ��� �Է¹��� �л� ���� �������� �Ҵ����
//3. �� �л��� �̸�, �й�, ��� ������ �Է¹���
//4. ������ �������� �Ҵ�� ��� �޸𸮸� ����(free)
typedef struct {
	char* name;//�̰͵� �ݺ��� �ȿ��� �޸� �����Ҵ� �ϴ� �� ���� �� �� 
	int ID;
	float average;

}Student;




//����2��
//Person ����ü�� �����ϰ�, �̸��� ���̸� ������.
//�����޸� �Ҵ��� �� Person ����ü�� �ν��Ͻ��� �����, �����κ��� �̸��� ���̸� �Է¹޾� ������ �� ���
typedef struct {
    char* name;//�̰͵� �ݺ��� �ȿ��� �޸� �����Ҵ� �ϴ� �� ���� �� �� 
    int age;

}Person;

//

int main_3(void) {
    Student* students;
    int size;
    printf("�Է��� �л��� �Է� : ");
    scanf("%d", &size);
    students = (Student*)malloc(size * sizeof(Student));// students������ �����Ҵ�
    int size_of_name = 100;//�̸� ���س��� structure�ȿ� �ִ� �����͵��� ���̸� ���� ��

    printf("\n");
    for (int i = 0; i < size; i++) {
        students[i].name = (char*)malloc(size_of_name * sizeof(char));//�޸� �����Ҵ�
        printf("�л��̸� �Է� : ");
        scanf("%s", students[i].name);//name�� �������̹Ƿ� �޸� �����Ҵ��� �� ����� ��
        printf("�й� �Է� : ");
        scanf("%d", &(*(students + i)).ID);
        printf("��� ���� �Է� : ");
        scanf("%f", &(students + i)->average);
        printf("\n---------\n");
    }

    //printf("%d", students[0].ID);
    for (int i = 0; i < size; i++) {
       
       // printf("%s\n", students[i].name);
       // printf("%d\n", students[i].ID);
        //printf("%.2f\n", students[i].average);
        printf("%d.\n", i + 1);
        printf("�л��̸� : %s\n", (students + i)->name);
        printf("�й� : %d\n", students[i].ID);
        printf("��� ���� : %.2f\n", (*(students + i)).average);
        printf("\n\n-----------\n");
    }
    free(students);

    printf("\n\n-----------\n\n");

    //2.
    Person* people;
    printf("�Է��� ����� �Է� : ");
    scanf("%d", &size);
    people = (Person*)malloc(size * sizeof(Person));

    printf("\n");
    for (int i = 0; i < size; i++) {
        people[i].name = (char*)malloc(size_of_name * sizeof(char));//�޸� ���� �Ҵ�
        printf("�̸� �Է� : ");
        scanf("%s", people[i].name);//name�� �������̹Ƿ� �޸� �����Ҵ��� �� ����� ��
        printf("���� �Է� : ");
        scanf("%d", &(*(people + i)).age);
        
        printf("\n---------\n");
    }
    for (int i = 0; i < size; i++) {
        printf("%d.\n", i + 1);
        printf("��� �̸� : %s\n", (people + i)->name);
        printf("\n");
        printf("��� ���� : %d\n", people[i].age);
        printf("\n\n-----------\n");
    
    }
    free(people);


	return 0;
}