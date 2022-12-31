#include <stdio.h>

float square(int n)
{
    return n * n;
}

int main(void)
{
    int n;
    printf("Input any number for square : ");
    scanf("%d", &n);

    printf("The square of %d is : %.2f\n", n, square(n));
    return (0);
}
