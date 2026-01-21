#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int start;
	int end;
} meeting;

meeting arr[100001];

int compare(const void* a, const void* b)
{
	meeting m1 = *(meeting*)a;
	meeting m2 = *(meeting*)b;

	if (m1.end > m2.end)
	{
		return 1;
	}
	else if (m1.end == m2.end)
	{
		if (m1.start > m2.start)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &arr[i].start, &arr[i].end);
	}
	qsort(arr, N, sizeof(meeting), compare);

	int tmp = 0;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i].start >= tmp)
		{
			tmp = arr[i].end;
			count++;
		}
	}

	printf("%d", count);
	return 0;
}