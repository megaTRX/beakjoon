#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>
#include <string.h>

int queue[1000002];
int front = 0;
int rear = -1;

void push(int x)
{
	queue[++rear] = x;
}

int pop()
{
	if (rear - front + 1 == 0)
	{
		return -1;
	}
	else
	{
		return (queue[front++]);
	}
}

int size()
{
	return (rear - front + 1);
}

int empty()
{
	if (rear - front + 1 != 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		push(i);
	}

	while (size() != 1)
	{
		pop();
		push(pop());
	}

	printf("%d", pop());
	return 0;
}