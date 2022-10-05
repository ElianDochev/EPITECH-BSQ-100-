/*
** EPITECH PROJECT, 2022
** map_create.c
** File description:
** allocs and returns full map;
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>

char **init_map(int rows_size, int colon_size)
{
    char **map = (char **) malloc((rows_size + 1) * sizeof(char *));

    for (int i = 0; i < rows_size; ++i) {
        map[i] = (char *) malloc(colon_size * sizeof(char) + 1);
        map[i][colon_size] = '\0';
    }
    map[rows_size] = NULL;
    return map;
}

char **create_map(char *file_str, int rows_size, int colon_size)
{
    char **map = init_map(rows_size, colon_size);
    int index_r = 0;
    int index_c = 0;

    if (map == NULL) {
        error("malloc for map failed\n");
        return NULL;
    }
    for (int i = 0; file_str[i] != '\0'; ++i) {
        if (file_str[i] == '\n') {
            ++index_r;
            index_c = 0;
            continue;
        }
        map[index_r][index_c] = file_str[i];
        ++index_c;
    }
    ++index_r;
    free(file_str);
    return map;
}
