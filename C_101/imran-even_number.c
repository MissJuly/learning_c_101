#include <stdio.h>

/**
 * main - tests if a number is even or odd
 * return - Always 0 success
*/
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%i", &num);

    if (num % 2 == 0)
    {
        printf("The number: %i, is even\n", num);
    } else
    {
        printf("The number: %i, is odd\n", num);
    }

    return (0);
}
