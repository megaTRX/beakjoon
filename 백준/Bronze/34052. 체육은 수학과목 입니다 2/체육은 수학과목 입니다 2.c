#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>

int main() {
    int circle = 0;
    int input;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &input);
        circle += input;
    }
    if (circle + 300 > 1800) {
        printf("No");
    }
    else {
        printf("Yes");
    }
    return 0;
}