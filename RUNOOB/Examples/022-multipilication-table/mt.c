#include <stdio.h>

int main()
{
    int i = 0;

    int j = 0;

    for(i = 0; i <= 9; i++)
    {
        for(j = 0; j <=i; j++) 
        {
            printf("%2d*%2d=%2d ", j, i, i*j);
        }
        printf("\n");
    
    }

    return 0;
}