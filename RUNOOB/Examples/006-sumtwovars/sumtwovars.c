#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("input two numbers: (separated by space)\n");

    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("sum of %d and %d is %d\n", a, b, sum);

    return 0;
}