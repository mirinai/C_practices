#include <stdio.h>

//�л� ������ �����ϴ� ����ü
struct Student {
	char name[20];
	int age;
};

int main_2(void) {

	struct Student students[3];

	for (int i = 0; i< 3; i++) {
		printf("�л� %d�� �̸� : ",i+1);
		scanf("%s", students[i].name);

		printf("�л� %d�� ���� : ",i+1);
		scanf("%d", &students[i].age);
	}
	printf("\n�Է��� �л� ����\n");

	for (int i = 0; i< 3; i++) {
		printf("�л� %d\n", i + 1);
		printf("�л� �̸� : %s\n", students[i].name);
		printf("�л� ���� : %d\n", students[i].age);
	}

	return 0;
}