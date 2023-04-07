// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num;

    int foo;

    foo = 42; // DECIMAL
    printf("%d\n", foo);
    foo = 042; // OCTAL!
    printf("%d\n", foo);
    foo = 0x42; // HEX!!
    printf("%d\n", foo);

    printf("Enter number: ");
    scanf("%ld", &num);

    do
    {
        printf("%ld", num % 2);
        num = num / 2;
    } while (num > 0);

    printf("  <== read backwards\n");

    return 0;
}
