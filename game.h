#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 9
#define COL 9

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROWs ROW+2
#define COLs COL+2

#define EASY_COUNT 10

void InitBoard(char board[ROWs][COLs], int rows, int cols, char set); void InitBoard(char board[ROWs][COLs], int rows, int cols, char set);
void DisplayBoard(char board[ROWs][COLs], int row, int col);
void SetMine(char board[ROWs][COLs], int row, int col);
void FindMine(char mine[ROWs][COLs], char show[ROWs][COLs], int row, int col);