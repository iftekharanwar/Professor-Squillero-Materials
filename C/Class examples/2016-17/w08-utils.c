// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 20

// PROTOS
void print_array(int *array, int size);
void swap_in_place(int array[], int array_size);
void swap_copy(int array_dst[], int array_src[], int array_size);

int main()
{
    int array[ARRAY_SIZE];

    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = 1 + rand() % 100;
    }
    print_array(array, ARRAY_SIZE);
    swap_in_place(array, ARRAY_SIZE);
    print_array(array, ARRAY_SIZE);

    return 0;
}

void swap_in_place(int a[], int s)
{
    for (int t = 0; t < s / 2; ++t)
    {
        int u = a[t];
        a[t] = a[s - t - 1];
        a[s - t - 1] = u;
    }
}

void print_array(int *a, int s)
{
    printf("%p:", a);
    for (int t = 0; t < s; ++t)
    {
        printf(" %d", a[t]);
    }
    printf("\n");
}
