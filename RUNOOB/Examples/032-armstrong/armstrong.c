#include <stdio.h>

int main()
{
    int number, originalNumber, remainder, result = 0;

    printf("input a number of 3 digits: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    if (result == number)
        printf("%d is an Armstrong number.", number);
    else
        printf("%d is not an Armstrong number.", number);
    
    return 0;
}