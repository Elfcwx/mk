#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	printf("请输入密码\n");

	for ( i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "12345") == 0)
		{
			printf("登入成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}

	}
	if (i == 3) 
	{
		printf("输入错误密码三次，无法继续输入\n");
	}
	return 0;
}