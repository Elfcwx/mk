#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int a, b;
	char c;
	printf("��������λ���ֽ���+ - * /����\n");
	scanf("%d %c %d", &a, &c ,& b);
	switch (c)
	{
	case'+':
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	case'-':
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	case'*':
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	case'/':
		if (b == 0) {
			printf("��������Ϊ0\n");
		}
		else
		{
			printf("%d / %d = %d\n", a, b, a / b);
		}
	default:
		printf("���뷽ʽ�����޷�����\n");
		break;
	}
}
