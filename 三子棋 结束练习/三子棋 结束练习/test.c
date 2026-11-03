#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void _game()
{
    char ret;
	char board[line][column];
	init_board(board, line, column);
	printf_board(board, line, column);
	while (1)
	{
	    play_move(board,line,column);
		printf_board(board, line, column);
		ret = is_win(board, line, column);
		if (ret != 'N')
		{
			break;
		}
		pc_move(board, line, column);
		printf_board(board, line, column);
		ret = is_win(board, line, column);
		if (ret != 'N')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
         printf("选一个:\n");
		scanf("%d", &input);
		switch(input)
		{
			case 0:
				printf("滚吧");
				break;
			case 1:
				_game();
				break;
			default:
				printf("眼瞎啊");
					break;
		}
	} while (input);
	return 0;
}