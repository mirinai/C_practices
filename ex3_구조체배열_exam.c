#include <stdio.h>
#include <stdlib.h>
//문제1번
//'Student'라는 이름의 구조체를 정의함
//이 구조체는 다음의 정보를 멤버로 가져야 함
//	-'name' : 학생의 이름을 저장하는 포인터
//	-'ID' : 학생의 학번을 저장하는 정수
//	-'average' : 학생의 평균 성적을 저장하는 실수
//2. 유저로부터 입력받을 학생 수를 동적으로 할당받음
//3. 각 학생의 이름, 학번, 평균 성적을 입력받음
//4. 끝나면 동적으로 할당된 모든 메모리를 해제(free)
typedef struct {
	char* name;//이것도 반복문 안에서 메모리 동적할당 하는 것 잊지 말 것 
	int ID;
	float average;

}Student;




//문제2번
//Person 구조체를 정의하고, 이름과 나이를 저장함.
//동적메모리 할당을 써 Person 구조체의 인스턴스를 만들고, 유저로부터 이름과 나이를 입력받아 저장한 뒤 출력
typedef struct {
    char* name;//이것도 반복문 안에서 메모리 동적할당 하는 것 잊지 말 것 
    int age;

}Person;

//

int main_3(void) {
    Student* students;
    int size;
    printf("입력할 학생수 입력 : ");
    scanf("%d", &size);
    students = (Student*)malloc(size * sizeof(Student));// students포인터 동적할당
    int size_of_name = 100;//미리 정해놓은 structure안에 있는 포인터들의 길이를 정할 값

    printf("\n");
    for (int i = 0; i < size; i++) {
        students[i].name = (char*)malloc(size_of_name * sizeof(char));//메모리 동적할당
        printf("학생이름 입력 : ");
        scanf("%s", students[i].name);//name도 포인터이므로 메모리 동적할당을 또 해줘야 함
        printf("학번 입력 : ");
        scanf("%d", &(*(students + i)).ID);
        printf("평균 성적 입력 : ");
        scanf("%f", &(students + i)->average);
        printf("\n---------\n");
    }

    //printf("%d", students[0].ID);
    for (int i = 0; i < size; i++) {
       
       // printf("%s\n", students[i].name);
       // printf("%d\n", students[i].ID);
        //printf("%.2f\n", students[i].average);
        printf("%d.\n", i + 1);
        printf("학생이름 : %s\n", (students + i)->name);
        printf("학번 : %d\n", students[i].ID);
        printf("평균 성적 : %.2f\n", (*(students + i)).average);
        printf("\n\n-----------\n");
    }
    free(students);

    printf("\n\n-----------\n\n");

    //2.
    Person* people;
    printf("입력할 사람수 입력 : ");
    scanf("%d", &size);
    people = (Person*)malloc(size * sizeof(Person));

    printf("\n");
    for (int i = 0; i < size; i++) {
        people[i].name = (char*)malloc(size_of_name * sizeof(char));//메모리 동적 할당
        printf("이름 입력 : ");
        scanf("%s", people[i].name);//name도 포인터이므로 메모리 동적할당을 또 해줘야 함
        printf("나이 입력 : ");
        scanf("%d", &(*(people + i)).age);
        
        printf("\n---------\n");
    }
    for (int i = 0; i < size; i++) {
        printf("%d.\n", i + 1);
        printf("사람 이름 : %s\n", (people + i)->name);
        printf("\n");
        printf("사람 나이 : %d\n", people[i].age);
        printf("\n\n-----------\n");
    
    }
    free(people);


	return 0;
}