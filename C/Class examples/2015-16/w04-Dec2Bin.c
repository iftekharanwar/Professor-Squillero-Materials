/*   ######      /***********************************************************\
 *  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           *
 *  ####   \     * https://github.com/squillero/computer-sciences            *
 *   ###G  c\    *                                                           *
 *   ##     _\   * Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it> *
 *   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>            *
\*   |   _/      \***********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Tell me a number: ");
    scanf("%d", &num);

    while (num > 0)
    {

        printf("%d", num % 2);
        num = num / 2;
    }
    printf("\n\nHey ho! Now read right to left...\n");

    return 0;
}
