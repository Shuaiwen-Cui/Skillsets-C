/**
 * @file character.c
 * @author your name (you@domain.com)
 * @brief use printf() to output a character, and use %c to format the output
 * @date 2024-03-05
 * 
 */

#include <stdio.h>

int main(void)
{
    char c;

    printf("please input an character:\n\r");

    // scanf() is used to input a character
    scanf("%c", &c);

    // output the character
    printf("the character is: %c\n\r", c);

    return 0;
}