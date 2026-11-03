#pragma once
#define line 3
#define column 3
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu();
void init_board(char a[line][column], int i, int j);
void printf_board(char a[line][column], int i, int j);
void play_move(char a[line][column], int i, int j);
char is_win(char a[line][column], int i, int j);
void pc_move(char a[line][column], int i, int j);