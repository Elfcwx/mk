#include <stdio.h>
/// <summary>
/// Êä³ö9 * 9³Ë·¨±í...
/// </summary>
int main()
{
	int result;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			result = j * i;
			printf("%d * %d =%-3d", j, i, result);
		}
		printf("\n");
	}

	return 0;
}