#include <stdio.h>
int main()
{
    double number;
 
    printf("input a number: ");
    scanf("%lf", &number);
 
    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("0");
        else
            printf("n");
    }
    else
        printf("p");
    return 0;
}