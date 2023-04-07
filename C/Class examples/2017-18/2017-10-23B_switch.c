// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf(": ");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("Op 0!\n");
        printf("Foo\n");
        break;
    case 1:
    case 23:
    case 10:
    case 65:
    case 'A':
    {
        int t = 0;
        while (t < 4)
        {
            printf("Whoa!\n");
            t = t + 1;
        }
    }
        printf("Op 1!\n");
        printf("Bar\n");
    case 2:
        printf("Op 2!\n");
        printf("Baz\n");
        break;
    case 3:
        printf("Op 3!\n");
        printf("Gargle\n");
        break;
    case 4:
        printf("Op 4!\n");
        printf("Whiz\n");
        break;
    default:
        printf("Uh?\n");
    }

    return 0;
}
