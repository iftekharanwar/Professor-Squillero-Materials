// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 100

int main()
{
    char name[MAX_STR_LEN + 1];

    //printf("What's your name? ");
    //scanf("%s", name);
    //printf("Hello %s, the cat is under the table.\n", name);

    printf("What's your name? ");
    gets(name);
    printf("Hello %s, the cat is under the table.\n", name);

    //int t;
    //for(t = 0; t<=MAX_STR_LEN; t+=1) {
    //    printf(" %d/%c", name[t], name[t]);
    //}
    printf("\n");

    return 0;
}
