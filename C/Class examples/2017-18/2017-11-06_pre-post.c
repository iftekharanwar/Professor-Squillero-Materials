// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int foo = 42;

    printf("Increments:\n");
    foo = foo + 1; // lame
    foo += 1;      // slightly better
    foo++;         // reasonable
    ++foo;         // that's it!

    for (int t = 0; t < 10; ++t)
    {
    }

    return 0;
}
