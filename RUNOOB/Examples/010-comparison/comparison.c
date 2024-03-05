#include <stdio.h>

int main(void)
{
    int a, b;

    printf("input two numbers: (separated by space)\n");

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is less than %d\n", a, b);
    }
    else
    {
        printf("%d is equal to %d\n", a, b);
    }

    return 0;
}