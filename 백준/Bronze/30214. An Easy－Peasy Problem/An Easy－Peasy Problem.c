#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int score, N;
	scanf("%d %d",&score, &N);
	int score2 = score * 2;
	if (score2 < N) {
		printf("H");
	}
	else {
		printf("E");
	}
	

}