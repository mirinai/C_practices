#include <stdio.h>
//당신은 학교에서 학생들의 정보를 관리하는 간단한 c프로그램을 작성하려고 합니다.
//이 프로그램은 학생의 이름, 학번, 그리고 평균 성적을 저장하고 학생정보를 입력받아 출력하는 기능을 포함해야 합니다.
//-> scanf 쓸때 문자열을 출력할 때에는 &(메모리주소)연산자를 안쓰기

//1. 'Student'라는 이름의 구조체를 정의하세요
//이 구조체는 다음 정보를 멤버로 가져야 합니다.
//-이름 ('name'):최대 50자의 문자열
//-학번 ('id'): 정수
//-평균성적('average'): 실수

//2. 사용자로부터 학생의 정보를 입력받는 'inputStudentInfo'함수를 구현
//이 함수는 'Student' 구조체 포인터를 매개변수로 받아, 해당 구조체 사용자 입력을 저장함
//3. 학생정보를 출력하는 'printStudentInfo'함수를 구현
//이 함수는 'Student' 구조체를 매개변수르 받아 학생의 이름, 학번, 평균성적을 출력함

//입력
//Enter student's name:John Doe
//Enter student's ID:123456
//Enter student's average grade:88.5

//출력
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
	scanf("%s", student->name);//->가 먼저라서 문자열 빼고는 &붙여줘야 함

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


	inputStudentInfo(&student);//값을 받음
	printf("\n");
	printStudentInfo(&student);
	return 0;
}