#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>

int main() {
    char name[101];

    scanf("%s", name);

    if (name[0] == 'F') printf("Foundation");
    else if (name[0] == 'C') printf("Claves");
    else if (name[0] == 'V') printf("Veritas");
    else if (name[0] == 'E') printf("Exploration");

    return 0;
}