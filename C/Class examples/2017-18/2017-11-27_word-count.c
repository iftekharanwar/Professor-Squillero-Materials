// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 512

int main()
{
    char line[MAX_LINE];

    gets(line);

    int state; // 1 inside word, 0 between word

    int num_words = 0;
    state = 1;
    if (isalnum(line[0]))
    {
        ++num_words;
    }
    for (int t = 0; line[t] != '\0'; ++t)
    {
        if (state == 0)
        {
            // between words
            if (!isspace(line[t]))
            {
                state = 1;
                ++num_words;
            }
        }
        else if (state == 1)
        {
            // inside a word
            if (!isalnum(line[t]))
            {
                state = 0;
            }
        }
    }
    printf("Number of words: %d\n", num_words);
    return 0;
}
