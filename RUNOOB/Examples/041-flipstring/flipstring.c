#include <stdio.h>
void reserveSentence();

int main()
{
    printf("INPUT A SENTENCE:");
    reserveSentence();
    return 0;
}  

void reserveSentence()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reserveSentence();
        printf("%c", c);
    }
}