#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	printf("����������\n");

	for ( i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "12345") == 0)
		{
			printf("����ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}

	}
	if (i == 3) 
	{
		printf("��������������Σ��޷���������\n");
	}
	return 0;
}