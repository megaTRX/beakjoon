#include <stdio.h>

int main(void) {
    int lastNumber;
    int sum = 0;
    int sum2 = 0;

    // & 기호를 붙여서 주소를 알려줍니다.
    scanf("%d", &lastNumber);

    // 1부터 lastNumber까지 차례대로 더합니다.
    for (int i = 1; i <= lastNumber; i++) {
        sum = sum + i;
        // 여기서 i = i + 1을 지워야 숫자가 순서대로 더해집니다.
    }

    // 1부터 lastNumber까지 세제곱을 더합니다.
    for (int i = 1; i <= lastNumber; i++) {
        sum2 = sum2 + (i * i * i);
    }

    // 결과를 출력합니다. %d는 정수를 출력하겠다는 약속이에요.
    printf("%d\n", sum);
    printf("%d\n", sum * sum);
    printf("%d\n", sum2);

    return 0;
}