#include <stdio.h>

void swap(int a, int b)
{
    int n1, n2;

    n1 = a;
    n2 = b;
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);

    n1 = b;
    n2 = a;
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}

int main(void)
{
    int a, b;
    printf("Input 1st number: ");
    scanf("%d", &a);

    printf("Input 2nd number: ");
    scanf("%d", &b);
    
    swap(a,b);
    return (0);
}
