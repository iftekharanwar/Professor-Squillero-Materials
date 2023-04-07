// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int v1[N], v2[N];

    for (int i = 0; i < N; i++)
    {
        printf("please, enter the integer value %d: \n", i + 1);
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("v1[%d] = %d\n", i, v1[i]);
    }

    for (int i = 0; i < N; i++)
    {
        v2[N - 1 - i] = v1[i];
    }

    for (int i = 0; i < N; i++)
    {
        printf("v2[%d] = %d\n", i, v2[i]);
    }

    return 0;
}
