#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ 
	int x, y;
	int answer;

	printf("The addition of two numbers:\n");
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);

	answer = x + y;
	printf("%d\n", answer);

	return (0);
}
