// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR_SIZE 4096

// protos
int my_own_strcmp_case_insensitive(const char *s1, const char *s2);

int main()
{
    printf("Hello string functions!\n");
    char str1[MAX_STR_SIZE], str2[MAX_STR_SIZE];

    scanf("%s", str1);
    scanf("%s", str2);

    printf("\"%s\" len: %d\n", str1, strlen(str1));
    printf("\"%s\" len: %d\n", str2, strlen(str2));

    // Copy: str3 = str1
    char str3[MAX_STR_SIZE];
    strcpy(str3, str1);

    // Concatenate: str3 += " " + str2
    strcat(str3, " ");
    strcat(str3, str2);
    printf("str3 is now \"%s\"\n", str3);

    if (stricmp(str1, str2) < 0)
    {
        printf("\"%s\" < \"%s\"\n", str1, str2);
    }
    else if (stricmp(str1, str2) == 0)
    {
        printf("\"%s\" == \"%s\"\n", str1, str2);
    }
    else if (stricmp(str1, str2) > 0)
    {
        printf("\"%s\" > \"%s\"\n", str1, str2);
    }

    return 0;
}

int my_own_strcmp_case_insensitive(const char *s1, const char *s2)
{
    char ts1[MAX_STR_SIZE];
    char ts2[MAX_STR_SIZE];

    // copy ts1 = s1, then lowercase everything
    strcpy(ts1, s1);
    for (int t = 0; ts1[t] != '\0'; ++t)
    {
        ts1[t] = tolower(ts1[t]);
    }

    // lowercase WHILE copying
    int t;
    for (t = 0; s2[t] != '\0'; ++t)
    {
        ts2[t] = tolower(s2[t]);
    }
    ts2[t] = '\0';

    return strcmp(ts1, ts2);
}
