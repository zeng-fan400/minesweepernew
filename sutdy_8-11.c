#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("*********  1.  play  ****************\n");
	printf("*********  0.  exit   ****************\n");
	printf("**********************************\n");
}
void game()
{
	//��δ洢��
	//1.���úõ��׵���Ϣ
	char mine[ROWs][COLs] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWs][COLs] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWs, COLs, '0');
	InitBoard(show, ROWs, COLs, '*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��>:\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}