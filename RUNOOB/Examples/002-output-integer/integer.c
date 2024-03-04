/**
 * @file integer.c
 * @brief use printf() to and %d to output an integer
 * @date 2024-03-05
 * 
 */

#include <stdio.h>
int main(void)
{
    int number;

    // input an integer
    printf("Please input an integer:\n\r");

    // scanf() is used to input an integer
    scanf("%d", &number);

    // output the integer
    printf("you have input an integer: %d\n\r", number);

    return 0;
}