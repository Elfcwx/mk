#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int a, b;
	char c;
	printf("请输入两位数字进行+ - * /运算\n");
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
			printf("除数不能为0\n");
		}
		else
		{
			printf("%d / %d = %d\n", a, b, a / b);
		}
	default:
		printf("输入方式有误，无法计算\n");
		break;
	}
}
