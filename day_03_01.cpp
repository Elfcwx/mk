#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/// <summary>
/// ��������Ϸ����1-100�ڲ³�����......
/// </summary>

void Meun() //��Ϸ�˵�
{
	printf("--------------------------------\n");
	printf("------------ 1.Play ------------\n");
	printf("------------ 2.Exit-------------\n");
	printf("--------------------------------\n");
}

void Game() //��Ϸ����
{
	int ret = rand() % 100 + 1; //1��100�ڵ������
	int guess = 0;
	while (1) 
	{
		printf("���һ�����֣� ");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");			
		}
		else if (guess > ret) 
		{
			printf("�´���\n");
		}
		else 
		{
			printf("��ϲ��¶���\n");
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
		printf("�밴�¼��̽���ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			keep = false;
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (keep);	
	return 0;
}