// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

typedef struct _TestStruct
{
    long double a;
    int b;
    char c;
} TestStruct;

typedef union _TestUnion
{
    long double a;
    int b;
    char c;
} TestUnion;

int main(int argc, char *argv[])
{
    printf("%ld\n", sizeof(long double));
    printf("%ld\n", sizeof(int));
    printf("1\n");
    printf("%ld\n", sizeof(TestStruct));
    printf("%ld\n", sizeof(TestUnion));

    TestUnion tu;
    TestStruct ts;

    return 0;
}
