#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;

    printf("input dividend: \n");

    scanf("%d", &dividend);

    printf("input divisor: \n");

    scanf("%d", &divisor);

    quotient = dividend / divisor;

    remainder = dividend % divisor;

    printf("quotient of %d and %d is %d\n", dividend, divisor, quotient);

    printf("remainder of %d and %d is %d\n", dividend, divisor, remainder);

    return 0;
}