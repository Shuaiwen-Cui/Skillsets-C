#include <stdio.h>

// int main()
// {
//     int n,j;    
//     unsigned long long factorial = 1;

//     printf("input an integer:");
//     scanf("%d", &n);

//     if (n < 0)
//         printf("Error! Factorial of a negative number doesn't exist.");
//     else {
//         for(j=1; j<=n; ++j){
//             factorial *= j;
//             printf("Factorial of %d = %llu\n\r", j, factorial);              
//         }
//     }

//     return 0;
// }

long int multiplyNumbers(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n * multiplyNumbers(n - 1);
    else
        return 1;
}