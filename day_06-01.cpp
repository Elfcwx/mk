#include <stdio.h>
/// <summary>
/// ���9 * 9�˷���...
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