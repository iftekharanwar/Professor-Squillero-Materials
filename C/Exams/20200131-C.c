// Copyright © Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256
#define N 8

typedef struct _DISPLACEMENT
{
    int row;
    int col;
} DISPLACEMENT;

/* prototypes */
void swap_maps(void);
int anyone_left(char army);

char foreground_map[N][N];
char background_map[N][N];

int main(int argc, char *argv[])
{
    /* boiler plate: start */
    if (argc != 4)
    {
        fprintf(stderr, "Yeuch! 3 arguments required. Got %d...\n", argc - 1);
        exit(EXIT_FAILURE);
    }
    FILE *map1 = fopen(argv[1], "r");
    if (map1 == NULL)
    {
        fprintf(stderr, "Can't open \"%s\" for reading.", argv[1]);
        exit(EXIT_FAILURE);
    }
    FILE *orders = fopen(argv[2], "r");
    if (orders == NULL)
    {
        fprintf(stderr, "Can't open \"%s\" for reading.", argv[2]);
        exit(EXIT_FAILURE);
    }
    FILE *map2 = fopen(argv[3], "w");
    if (map2 == NULL)
    {
        fprintf(stderr, "Can't open \"%s\" for writing.", argv[3]);
        exit(EXIT_FAILURE);
    }
    /* boiler plate: end */

    // read background_map, then and copying it to foreground
    for (int r = 0; r < N; ++r)
    {
        for (int c = 0; c < N; ++c)
        {
            fscanf(map1, "%c", &background_map[r][c]);
        }
        char ret;
        fscanf(map1, "%c", &ret);
    }
    fclose(map1);
    swap_maps();

    char buffer[BUFFER_SIZE];
    while (fgets(buffer, BUFFER_SIZE, orders) != NULL)
    {
        // never mix char (%c) and token (%d) input from a file!
        char army, direction;
        int steps;
        sscanf(buffer, "%c %c %d", &army, &direction, &steps); // ok from string
        DISPLACEMENT disp = {0, 0};
        switch (direction)
        {
        case 'N':
            disp.row = -steps;
            break;
        case 'S':
            disp.row = steps;
            break;
        case 'E':
            disp.col = steps;
            break;
        case 'W':
            disp.col = -steps;
            break;
        }
        for (int r = 0; r < N; ++r)
        {
            for (int c = 0; c < N; ++c)
            {
                if (foreground_map[r][c] != '0')
                {
                    int nr = r;
                    int nc = c;
                    if (foreground_map[r][c] == army)
                    {
                        nr += disp.row;
                        nc += disp.col;
                    }
                    if (nr >= 0 && nr < N && nc >= 0 && nc < N)
                    {
                        background_map[nr][nc] = foreground_map[r][c];
                    }
                }
            }
        }
        swap_maps();
        if (!anyone_left(army))
        {
            printf("The army '%c' left the field.\n", army);
        }
    }
    fclose(orders);

    for (int r = 0; r < N; ++r)
    {
        for (int c = 0; c < N; ++c)
        {
            fprintf(map2, "%c", foreground_map[r][c]);
        }
        fprintf(map2, "\n");
    }
    fclose(map2);
    return EXIT_SUCCESS;
}

// copy background map to foreground; then reset background
void swap_maps(void)
{
    for (int r = 0; r < N; ++r)
    {
        for (int c = 0; c < N; ++c)
        {
            foreground_map[r][c] = background_map[r][c];
            background_map[r][c] = '0';
        }
    }
}

int anyone_left(char army)
{
    for (int r = 0; r < N; ++r)
        for (int c = 0; c < N; ++c)
            if (foreground_map[r][c] == army)
                return 1;
    return 0;
}
