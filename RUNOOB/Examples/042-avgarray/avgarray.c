#include <stdio.h>

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sum, loop;
    float avg;

    sum = avg = 0;

    for (loop = 0; loop < 10; loop++)
    {
        sum += array[loop];
    }

    avg = (float)sum / loop;

    printf("Sum of array is %d\n", sum);

    printf("Average of array is %.2f\n", avg);

    return 0;
}