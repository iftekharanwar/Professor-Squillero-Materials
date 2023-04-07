// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    for (int r = 0; r < rows; r = r + 1)
    {
        /** option1
        for(int c = 0; c < r; c = c + 1) {
            printf(" ");
        }
        for(int c = r; c < rows; c = c + 1) {
            printf("#");
        }
        **/
        for (int c = 0; c < rows; ++c)
        {
            if (c >= r)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
