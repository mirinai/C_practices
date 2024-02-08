#include <stdio.h>

//학생 정보를 저장하는 구조체
struct Student {
	char name[20];
	int age;
};

int main_2(void) {

	struct Student students[3];

	for (int i = 0; i< 3; i++) {
		printf("학생 %d의 이름 : ",i+1);
		scanf("%s", students[i].name);

		printf("학생 %d의 나이 : ",i+1);
		scanf("%d", &students[i].age);
	}
	printf("\n입력한 학생 정보\n");

	for (int i = 0; i< 3; i++) {
		printf("학생 %d\n", i + 1);
		printf("학생 이름 : %s\n", students[i].name);
		printf("학생 나이 : %d\n", students[i].age);
	}

	return 0;
}