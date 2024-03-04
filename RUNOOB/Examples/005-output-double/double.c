/**
 * @file double.c
 * @author your name (you@domain.com)
 * @brief to print double number
 * @version 0.1
 * @date 2024-03-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>

int main(void)
{
    double d;

    printf("please input a double number:\n\r");

    // scanf() is used to input a double number
    scanf("%lf", &d);

    // output the double number
    printf("the double number is: %le\n\r", d);

    return 0;
}