// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM_FRIENDS 30
#define NAME_LEN 50

char friends[MAX_NUM_FRIENDS][NAME_LEN + 1];

int main()
{
    printf("Type your friends, end with -\n");

    int friends_num = 0;

    do
    {
        gets(friends[friends_num++]);
    } while (strcmp(friends[friends_num - 1], "-") != 0);
    --friends_num;

    printf("I have %d friends:\n", friends_num);
    for (int t = 0; t < friends_num; ++t)
    {
        printf("%d: %s\n", t + 1, friends[t]);
    }

    return 0;
}
