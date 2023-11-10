#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	int max = 10000;

	for (int i = 1; i <= max; i++)
	{
		if (i % 221 == 0)
		{
			printf("13かつ17で割り切れる数%8d\n", i, sum);
		}
		else if (i % 13 == 0)
		{
			printf("%d\n", i, sum);
		}
		else if (i % 17 == 0)
		{
			printf("%d\n", i, sum);
		}
	}

	return 0;
}
