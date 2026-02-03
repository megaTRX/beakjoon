#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	float W, H;
	scanf("%f %f", &W, &H);
	float area = W * H * (0.5);
	printf("%.1f", area);
	return 0;

}