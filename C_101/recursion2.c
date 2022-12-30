#include <stdio.h>

void fibonacci(int n, int a, int b)
{
    if (n > 0) {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}

int main()
{
    int n;

    printf("Input number of terms for the series (<20) : ");
    scanf("%d", &n);

    printf("\nThe series are : \n");

    fibonacci(n, 0, 1);
    printf("\n");
    return (0);
}
