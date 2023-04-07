// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main()
{
    int array[ARRAY_SIZE];

    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = rand() % 100;
    }
    printf("Array:");
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    int swapped = 1;
    while (swapped == 1)
    {
        swapped = 0;
        for (int t = 1; t < ARRAY_SIZE; ++t)
        {
            if (array[t] < array[t - 1])
            {
                swapped = 1;
                printf("Swap: %d <-> %d\n", array[t - 1], array[t]);
                int tmp = array[t];
                array[t] = array[t - 1];
                array[t - 1] = tmp;
            }
        }
    }

    printf("Array:");
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", array[t]);
    }
    printf("\n");

    return 0;
}
