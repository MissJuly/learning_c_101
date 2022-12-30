#include <stdio.h>

void print_numbers(int n)
{
    if (n > 50) return;

    printf("%d ", n);
    print_numbers(n + 1);
}

int main(void)
{
    print_numbers(1);
    printf("\n");
    return (0);
}