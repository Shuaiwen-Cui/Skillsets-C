#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("输入行数: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}