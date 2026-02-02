#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int teacher;
	int student;
	scanf("%d", &student);
	scanf("%d", &teacher);
	if (teacher == student) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;

}