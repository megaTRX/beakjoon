#include <stdio.h>
#include <stdlib.h> // malloc, free 사용 시

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    // 동적 할당 또는 배열 사용
    int *arr = (int *)malloc(sizeof(int) * n);
    int current_index = 0;
    int count = 0; // 제거된 사람 수

    // 초기 배열 설정 (1부터 N까지)
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("<");
    while (count < n) {
        // 다음 제거될 사람 찾기
        current_index = (current_index + k - 1) % (n - count); // 현재 남은 사람 수 기준

        printf("%d", arr[current_index]);
        count++;
        if (count < n) {
            printf(", ");
        }

        // 해당 요소 제거 (뒤로 당겨서 쉬프트)
        for (int i = current_index; i < n - count; i++) {
            arr[i] = arr[i + 1];
        }
    }
    printf(">\n");

    free(arr); // 메모리 해제
    return 0;
}