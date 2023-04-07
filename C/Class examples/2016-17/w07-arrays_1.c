// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5
#define TRUE 1
#define FALSE 0

int main()
{
    int array1[ARRAY_SIZE] = {1, 1, 1, 4, 5};
    int array2[ARRAY_SIZE] = {5, 1, 1, 4, 1};
    int canceled[ARRAY_SIZE] = {0};

    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        int found = 0;
        for (int u = 0; found == 0 && u < ARRAY_SIZE; ++u)
        {
            if (array1[t] == array2[u] && !canceled[u])
            {
                canceled[u] = 1;
                found = 1;
            }
        }
    }

    printf("\n");
    return 0;
}
