#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// <summary>
/// 计算1000 - 2000年中共有几个闰年...
/// </summary>

int isrunYears(int n) 
{
	if ((n % 4 == 0) && (n % 100 != 0) || n % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int main()
{
	int y = 0;
	int count = 0;

	for (y = 1000; y <= 2000; y++)
	{
		if (isrunYears(y) == 1)
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\n1000 - 2000年共有%d个闰年", count);
	return 0;
}