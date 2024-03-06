#include <stdio.h>
#include <math.h>  

int main()
{
    float a, b, c, x1, x2, d;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a!=0)
    {
        d = sqrt(b*b-4*a*c);
        if(d>=0)
        {
            x1 = (-b+d)/(2*a);
            x2 = (-b-d)/(2*a);
            printf("Roots are: %.2f and %.2f\n", x1, x2);
        }
        else
        {
            printf("Roots are complex\n");
        }
    }

    return 0;
}