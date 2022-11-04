#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;
	float result;

	printf("The division between two numbers:\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);

	if (b != 0)
	{
		result = (float)a / (float)b;
		printf("%.3f\n", result);
	}
	else
	{
		printf("Division is not possible.\n");
	}
	return (0);
}
