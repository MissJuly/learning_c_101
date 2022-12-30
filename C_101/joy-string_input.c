#include <stdio.h>

/**
 * main - takes input
 * 
 * return 0
 */
int main()
{
    char str[100];

    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);

    printf("\nThe string you entered is : %s\n", str);
    return (0);
}
