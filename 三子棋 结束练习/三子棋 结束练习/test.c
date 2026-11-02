#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void _game()
{
    char ret;
	char plant[line][column];
	init_plant(plant, line, column);
	printf_plant(plant, line, column);
	while (1)
	{
	    play_move(plant,line,column);
		printf_plant(plant, line, column);
		ret = is_win(plant, line, column);
		if (ret != 'N')
		{
			break;
		}
		pc_move(plant, line, column);
		printf_plant(plant, line, column);
		ret = is_win(plant, line, column);
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