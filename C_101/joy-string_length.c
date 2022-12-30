#include <stdio.h>

/**
 * main - checks length of string
 * 
 * return 0
*/
int main()
{
    char s[16];
    int i, count;
    

    printf("Input the string : ");
    scanf("%s", s);

    count = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("The length of the string is : %d\n", count);

    return (0);

}