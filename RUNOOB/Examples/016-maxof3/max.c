#include <stdio.h>

int main()
{
    double n1, n2, n3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2)
    {
        if (n1 >= n3)
            printf("Largest number: %.2lf\n", n1);
        else
            printf("Largest number: %.2lf\n", n3);
    }
    else
    {
        if (n2 >= n3)
            printf("Largest number: %.2lf\n", n2);
        else
            printf("Largest number: %.2lf\n", n3);
    }

    return 0;
}