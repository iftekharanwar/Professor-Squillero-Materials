// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
/*name(10) surname(10) ID(6) mark(2) 34+1*/

int main()
{
    char mat[N][35];
    int i, sum;
    char tmpname[11], tmpsurn[11];
    int tmpID, tmpmark;
    int avg;

    for (i = 0; i < N; i++)
    {
        printf("please insert info for the %d student\n", i + 1);
        gets(mat[i]);
    }

    /*
    for(i=0;i<N;i++){
        printf("%s\n",mat[i]);
    }
    */
    /*ernesto sanchez 123456 18 */

    sum = 0;
    for (i = 0; i < N; i++)
    {
        sscanf(mat[i], "%s %s %d %d", tmpname, tmpsurn, &tmpID, &tmpmark);
        sum = sum + tmpmark;
    }

    avg = sum / N;
    printf("avg %d \n", avg);

    for (i = 0; i < N; i++)
    {
        sscanf(mat[i], "%s %s %d %d", tmpname, tmpsurn, &tmpID, &tmpmark);
        if (avg == tmpmark)
        {
            printf("%s %s mark:%d\n", tmpsurn, tmpname, tmpmark);
        }
    }

    return 0;
}
