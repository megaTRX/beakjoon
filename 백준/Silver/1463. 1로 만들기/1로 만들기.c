#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define min(A,B) A<B?A:B
 
int arr[1000001];
 
int main() {
    int X;
    scanf("%d", &X);
    for (int i = 2; i <= X; i++) {
        arr[i] = arr[i - 1] + 1;
        if (i % 3 == 0)
            arr[i] = min(arr[i], arr[i / 3] + 1);
        if (i % 2 == 0)
            arr[i] = min(arr[i], arr[i / 2] + 1);
    }
    printf("%d", arr[X]);
	return 0;
}