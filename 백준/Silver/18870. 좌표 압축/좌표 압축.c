#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n;
    scanf("%d", &n);
    int num[n];
    int num2[n];
    int unique[n];
    int count[n];
    
    for(int i = 0; i < n; i++) count[i] = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        num2[i] = num[i];
    }

    qsort(num, n, sizeof(int), compare);

    int idx = 0;
    unique[idx++] = num[0];
    for(int i = 1; i < n; i++) {
        if(num[i] != num[i-1]) {
            unique[idx++] = num[i];
        }
    }

    for(int i = 0; i < n; i++) {
        int left = 0, right = idx - 1, mid;
        while(left <= right) {
            mid = (left + right) / 2;
            if(num2[i] > unique[mid]) left = mid + 1;
            else right = mid - 1;
        }
        count[i] = left;
    }

    for(int i = 0; i < n; i++) printf("%d ", count[i]);
    printf("\n");

    return 0;
}