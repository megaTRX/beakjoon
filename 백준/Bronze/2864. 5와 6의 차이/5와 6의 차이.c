#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 문자를 교체하는 함수
void replace(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char a[10], b[10];
    char minA[10], maxA[10], minB[10], maxB[10];

    // 문자열로 입력받기
    scanf("%s %s", a, b);

    // 복사본 만들기
    strcpy(minA, a); strcpy(maxA, a);
    strcpy(minB, b); strcpy(maxB, b);

    // 최솟값 구하기: 6을 5로 변경
    replace(minA, '6', '5');
    replace(minB, '6', '5');

    // 최댓값 구하기: 5를 6로 변경
    replace(maxA, '5', '6');
    replace(maxB, '5', '6');

    // 결과 출력: 최솟값 합, 최댓값 합
    printf("%d %d\n", atoi(minA) + atoi(minB), atoi(maxA) + atoi(maxB));

    return 0;
}