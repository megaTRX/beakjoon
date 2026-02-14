#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>

int main() {
    int a, b, c, d, e, f;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int a2 = 1 - a;
    int b2 = 1 - b;
    int c2 = 2 - c;
    int d2 = 2 - d;
    int e2 = 2 - e;
    int f2 = 8 - f;

    printf("%d %d %d %d %d %d", a2, b2, c2, d2, e2, f2);

    return 0;
}