// Copyright © 2018 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long int Bob;

struct _COMPLEX
{
    double re, im;
};
typedef struct _COMPLEX COMPLEX;

int main()
{
    Bob foo;
    Bob bar;
    COMPLEX n1, n2;
    FILE *zop;

    printf("Size of Bob: %d\n", sizeof(Bob));
    return 0;
}
