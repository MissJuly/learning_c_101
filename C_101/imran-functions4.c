#include <stdio.h>

void checkEven(int n)
{
    if (n % 2 == 0)
    {
        printf("The entered number is even.\n");
    } else {
        printf("The entered number is odd.\n");
    }
}

int main()
{
    int n;

    printf("Input any number : ");
    scanf("%d", &n);

    checkEven(n);

    return (0);
}
