#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char operator;
	double num1;
	double num2;
	double answer;

	printf("\nEnter an operator (+ - * /): ");
	scanf("%c", &operator);

	printf("Enter first number: ");
	scanf("%lf", &num1);

	printf("Enter second number: ");
	scanf("%lf", &num2);

	switch (operator)
	{
		case '+':
			answer = num1 + num2;
			printf("\nanswer: %lf", answer);
			break;
		case '-':
			answer = num1 - num2;
			printf("\nanswer: %lf", answer);
			break;
		case '*':
			answer = num1 * num2;
			printf("\nanswer: %lf", answer);
			break;
		case '/':
			answer = num1 / num2;
			printf("\nanswer: %lf", answer);
			break;
		default:
			printf("%c is not valid", operator);
	}
	printf("\n");

	return (0);
}
