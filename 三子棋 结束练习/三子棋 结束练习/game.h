#pragma once
#define line 3
#define column 3
#include<stdio.h>
void menu();
void init_plant(char a[line][column], int i, int j);
void printf_plant(char a[line][column], int i, int j);
void play_move(char a[line][column], int i, int j);