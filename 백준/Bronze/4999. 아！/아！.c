#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>
#include <string.h>

int main() {

	char a[1001];
	char b[1001];

	scanf("%s", a);
	scanf("%s", b);

	if (strlen(a) > strlen(b)) {
		printf("go");
	}
	else if (strlen(a) == strlen(b)) {
		printf("go");
	}
	else {
		printf("no");
	}
	return 0;
}