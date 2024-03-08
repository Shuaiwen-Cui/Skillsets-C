#include <stdio.h>

int main()
{
    char letter = 'A';

    printf("Alphabet from A - Z are: \n");

    while (letter <= 'Z')
    {
        printf("%c ", letter);
        letter++;
    }

    return 0;
}