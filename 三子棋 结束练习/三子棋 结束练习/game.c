#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("*****************\n");
	printf("*****1,play******\n");
	printf("*****0.end******\n");
	printf("*****************\n");
}

void init_plant(char a[line][column], int i, int j)
{
	for (int x = 0; x < line; x++)
	{
		for (int y = 0; y < column; y++)
			a[x][y] = ' ';
	}
}

void printf_plant(char a[line][column], int i, int j)
{
	for (int x = 0; x < line; x++)
	{
		for (int y = 0; y < column; y++)
		{
            printf(" %c ", a[x][y]);
			if (y < column - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (int y = 0; y < column; y++)
		{
			if (x < line-1)
			{
				printf("---");
				if (y < column - 1)
				{
					printf("|");
				}
			}
			

		}
		printf("\n");
	}
}

void play_move(char a[line][column], int i, int j)
{
	printf("请移动\n");
	while (1)
	{
		printf("输入落子位置坐标，以空格分开：");
		int q = 0, p = 0;
		scanf("%d %d", &q, &p);
		if (q > 0 && q < line&& p > 0 && p < column)
		{
			if (a[q - 1][p - 1] == ' ')
			{
				a[q-1][p-1] = '*';
				break;
			}
			else
			{
				printf("已被占用");
			}
		}
		else 
		{
			printf("无效位置");
		}
	}
}
