#include <stdio.h>

int main(void)
{
    char c;

    printf("input a character: \n");

    scanf("%c", &c);

    printf("ASCII value of %c is %d\n", c, c); // it is up to how the character is outputted, %d or %c

    return 0;
}