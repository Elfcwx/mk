#include <math.h>
#include <stdio.h>

/// <summary>
/// 输出100 - 200之间的素数...
/// </summary>

int is_prime(int _n)
{
	for (int m = 2; m < _n; m++)
	{
		if (_n % m == 0)
		{
			return 0;
		}
	}
	return 1;
}

void main()
{

	for (int n = 100; n <= 200; n++)
	{
		if (is_prime(n) == 1)
		{
			printf("%d ", n);
		}
	}
}