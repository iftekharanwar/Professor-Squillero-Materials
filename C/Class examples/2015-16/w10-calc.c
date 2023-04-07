// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double n1, n2;
    double result;

    if (argc != 4)
    {
        printf("Yeuch!\n");
        exit(EXIT_FAILURE);
    }

    sscanf(argv[1], "%lf", &n1);
    sscanf(argv[3], "%lf", &n2);

    //if(strcmp(argv[2], "+")==0) {
    //    ...
    //} else if(strcmp(argv[2], "/")==0) {
    //    ...
    //}

    switch (argv[2][0])
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    default:
        printf("D'ho\n");
        exit(EXIT_FAILURE);
    }

    printf("%g %s %g = %g\n", n1, argv[2], n2, result);

    return EXIT_SUCCESS;
}
