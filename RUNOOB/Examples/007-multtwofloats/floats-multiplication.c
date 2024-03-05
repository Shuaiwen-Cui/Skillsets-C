#include <stdio.h>

int main(void)
{
    float a, b, product;

    printf("input two float numbers: (separated by space)\n");

    scanf("%f %f", &a, &b);

    product = a * b;

    printf("product of %f and %f is %f\n", a, b, product);

    return 0;
}