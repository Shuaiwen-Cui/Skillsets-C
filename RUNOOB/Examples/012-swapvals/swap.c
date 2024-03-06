#include <stdio.h>

int main()
{
    double a, b, temp;

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping, a = %.2lf\n", a);
    printf("After swapping, b = %.2lf\n", b);

    return 0;
}