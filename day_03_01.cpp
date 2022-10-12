#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/// <summary>
/// 猜数字游戏，在1-100内猜出数字......
/// </summary>

void Meun() //游戏菜单
{
	printf("--------------------------------\n");
	printf("------------ 1.Play ------------\n");
	printf("------------ 2.Exit-------------\n");
	printf("--------------------------------\n");
}

void Game() //游戏功能
{
	int ret = rand() % 100 + 1; //1—100内的随机数
	int guess = 0;
	while (1) 
	{
		printf("请猜一个数字： ");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");			
		}
		else if (guess > ret) 
		{
			printf("猜大了\n");
		}
		else 
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	bool keep = true;
	srand((unsigned int)time(NULL));
	
	do
	{
		Meun();
		printf("请按下键盘进行选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 2:
			printf("退出游戏\n");
			keep = false;
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (keep);	
	return 0;
}