#include <stdio.h>

/**
 * main- checks for odd and even number
 * 
 * Return 0 Always success
*/
int main()
{
    int n;

    printf("Please enter number: ");
    
    scanf("%d\n", &n);

    if (n % 2 == 0)
    {
        printf("%d is an even number\n", n);
    }
    else if (n % 2 != 0)
    {
        printf("%d is an odd number\n", n);
    }
    else
    {   
        printf("What the heck champ!!\n");
        printf("Please enter valid number\n");
    } 
    return (0);
}