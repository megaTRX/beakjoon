#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {
    int num = 0;
    long long sum = 1;
    scanf("%d", &num);
    
    for(int i = num; i > 0; i--) {
        sum*=i;
    }
    
    printf("%lld", sum);
    return 0;
}