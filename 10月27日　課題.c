#include<stdio.h>
int main(void)
{
	int a, b, surplus, result;

	printf("Please Enter Number: ");
	scanf_s("%d", &a);
	printf("Please Enter Other Number: ");
	scanf_s("%d", &b);

	surplus = a % b;

	if (surplus == 0)
	{
		result = a / b;
		printf("%d / %d = %d\n!", a, b, result);
	}

	return 0;
}








#include<stdio.h>

int main(void)
{
	int a;

	printf("入力データは？ >>> ");
	scanf_s("%d", &a);

	printf("データは");
	if (a % 2 == 0)
	{
		printf("偶数");
	}
	else
	{
		printf("奇数");
	}
	printf("です\n");

	return 0;
}
