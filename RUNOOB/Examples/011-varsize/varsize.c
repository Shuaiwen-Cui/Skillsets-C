#include <stdio.h>

int main(void)
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    int a;
    long b;
    long long c;

    double e;
    long double f;

    // sizeof variables
    printf("Size of int: %ld bytes\n", sizeof(integerType));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));
    printf("Size of char: %ld byte\n", sizeof(charType));

    printf("Size of int: %ld bytes\n", sizeof(a));
    printf("Size of long: %ld bytes\n", sizeof(b));
    printf("Size of long long: %ld bytes\n", sizeof(c));

    printf("Size of double: %ld bytes\n", sizeof(e));
    printf("Size of long double: %ld bytes\n", sizeof(f));

    return 0;
}