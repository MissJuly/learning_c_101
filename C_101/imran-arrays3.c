#include <stdio.h>

/**
 * main - finds the sum of all elements in the array
*/

int main()
{
    int i;
    int n;
    int sum;
    int array[100];

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("input %d elements in the array\n", n);

    for (i = 0; i < n; i++)
    {
        printf("elements - %d: ", i);
        scanf("%d", &array[i]);
    }

    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    printf("Sum of all elements stored in the array is: %d\n", sum);

    return (0);
}
