// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void PrintArray(int v[]);
void Init(int v[]);
int SeekValue(int v[], int val);

int SeekValue2(int in[], int val, int out[]);

int main()
{
    int array[DIM];
    int v;

    PrintArray(array);
    scanf("%d", &v);
    if (SeekValue(array, v) != -1)
    {
        printf("Whoa!\n");
    }

    return EXIT_SUCCESS;
}

int SeekValue(int v[], int val)
{
    int t;

    for (t = 0; t < DIM; ++t)
    {
        if (v[t] == val)
        {
            return t;
        }
    }
    return -1;
}

void PrintArray(int v[])
{
    int t;
    for (t = 0; t < DIM; ++t)
    {
        printf(" %d", v[t]);
    }
    printf("\n");
    v = 0;
}

void Init(int v[])
{
    int t;
    printf("Initiliazing array @%p\n", v);
    for (t = 0; t < DIM; ++t)
    {
        v[t] = 0;
    }
}
