#include <stdio.h>

int main()
{
    char ope;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &ope);

    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch (ope)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
        break;
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}