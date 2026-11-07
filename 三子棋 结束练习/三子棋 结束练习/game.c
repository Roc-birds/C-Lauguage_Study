#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("*****************\n");
	printf("*****1,play******\n");
	printf("*****0.end******\n");
	printf("*****************\n");
}

void init_board(char a[line][column], int i, int j)
{
	for (int x = 0; x < line; x++)
	{
		for (int y = 0; y < column; y++)
			a[x][y] = ' ';
	}
}

void printf_board(char a[line][column], int i, int j)
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
		if (scanf("%d %d", &q, &p) != 2)
		{
			while(getchar()!='\n')
			    printf("输入合法数字\n");
			continue;
		}
		if (q > 0 && q <=line&& p > 0 && p <= column)
		{
			if (a[q - 1][p - 1] == ' ')
			{
				a[q-1][p-1] = '*';
				break;
			}
			else
			{
				printf("已被占用\n");
			}
		}
		else 
		{
			printf("无效位置\n");
		}
	}
}

char is_win(char a[line][column], int i, int j)
{
	for (int n = 0; n < line; n++)
	{
		if (a[n][0] == a[n][1] && a[n][0] == a[n][2]&&a[n][0]!=' ')
		{
			return a[n][0];
		}
	}
	for (int m = 0; m < column; m++)
	{
		if (a[0][m] == a[1][m] && a[0][m] == a[2][m]&&a[0][m]!=' ')
		{
			return a[0][m];
		}
	}
	if (a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] != ' ')
	{
		return a[0][0];
	}
	if (a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[2][0] != ' ')
	{
		return a[0][2];
	}
	if (is_full(a, i, j))
	{
		return 'V';
	}
	else
	{
		return 'N';
	}
}

static is_full(char a[line][column], int i, int j)
{
	for (int r = 0; r < line; r++)
	{
		for (int R = 0; R < column; R++)
		{
			if (a[r][R] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

void pc_move(char a[line][column], int i, int j)
{
	printf("电脑移动\n");
	while (1)
	{
		int x = rand() % line;
		int y = rand() % column;
		if (a[x][y] == ' ')
		{
			a[x][y] = '#';
			break;
		}
	}
}