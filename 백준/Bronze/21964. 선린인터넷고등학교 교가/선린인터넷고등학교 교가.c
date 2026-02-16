#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>
#include <string.h>

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);


    char s[100001];
    scanf("%s", s);

 
    printf("%s", &s[N - 5]);

    return 0;
}