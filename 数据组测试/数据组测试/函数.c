#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int a[][3])
{
	int i = 0;
	int y = 0;
	for (i = 0; i <= 1; i++)
	{
		for (y = 0; y <= 2; y++)
		{
			printf("%d ", a[i][y]);
		}
	}
}