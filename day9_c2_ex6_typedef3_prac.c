#include <stdio.h>
//����� �б����� �л����� ������ �����ϴ� ������ c���α׷��� �ۼ��Ϸ��� �մϴ�.
//�� ���α׷��� �л��� �̸�, �й�, �׸��� ��� ������ �����ϰ� �л������� �Է¹޾� ����ϴ� ����� �����ؾ� �մϴ�.
//-> scanf ���� ���ڿ��� ����� ������ &(�޸��ּ�)�����ڸ� �Ⱦ���

//1. 'Student'��� �̸��� ����ü�� �����ϼ���
//�� ����ü�� ���� ������ ����� ������ �մϴ�.
//-�̸� ('name'):�ִ� 50���� ���ڿ�
//-�й� ('id'): ����
//-��ռ���('average'): �Ǽ�

//2. ����ڷκ��� �л��� ������ �Է¹޴� 'inputStudentInfo'�Լ��� ����
//�� �Լ��� 'Student' ����ü �����͸� �Ű������� �޾�, �ش� ����ü ����� �Է��� ������
//3. �л������� ����ϴ� 'printStudentInfo'�Լ��� ����
//�� �Լ��� 'Student' ����ü�� �Ű������� �޾� �л��� �̸�, �й�, ��ռ����� �����

//�Է�
//Enter student's name:John Doe
//Enter student's ID:123456
//Enter student's average grade:88.5

//���
//Student Information:
//Name : John Doe
//ID:123456
//Average grade:88.5

//1.
typedef struct {
	char name[50];
	int id;
	float aveG;

}Student;

//2.
void inputStudentInfo(Student* student) {
	printf("Enter student's name: ");
	scanf("%s", student->name);//->�� ������ ���ڿ� ����� &�ٿ���� ��

	printf("Enter student's ID: ");
	scanf("%d", &student->id);

	printf("Enter student's average grade: ");
	scanf("%f", &student->aveG);
}

//3.
void printStudentInfo(Student* student) {
	printf("Student Information : %s\n",student->name);
	printf("Name : %d\n",student->id);
	printf("ID : %.2f\n",student->aveG);


}


int main_6(void) {

	Student student;


	inputStudentInfo(&student);//���� ����
	printf("\n");
	printStudentInfo(&student);
	return 0;
}