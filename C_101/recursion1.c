#include <stdio.h>

int summation(int n)
{
    if (n == 1) {
        return (1);
    }
    return n + summation(n - 1);
}

int main(void)
{
    int n;
    printf("Input the last number of the range starting from 1 : ");
    scanf("%d", &n);

    printf("The sum of numbers from 1 to %d : %d \n", n, summation(n));

    return (0);
}