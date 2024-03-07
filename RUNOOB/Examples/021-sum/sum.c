#include <stdio.h>

int main()
{
    int i, n;
    int sum = 0;

    printf("input a number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("sum = %d\n", sum);

    return 0;
}