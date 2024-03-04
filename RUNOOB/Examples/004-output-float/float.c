/**
 * @file float.c
 * @author your name (you@domain.com)
 * @brief to print float number
 * @version 0.1
 * @date 2024-03-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>

int main(void)
{
    float f;

    printf("please input a float number:\n\r");

    // scanf() is used to input a float number
    scanf("%f", &f);

    // output the float number
    printf("the float number is: %f\n\r", f);

    return 0;
}