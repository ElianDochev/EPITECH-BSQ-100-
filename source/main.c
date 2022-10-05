/*
** EPITECH PROJECT, 2022
** Main function
** File description:
** MAin
*/

#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include "my.h"

int main (int ac, char **av)
{
    int rows_size = 0;
    int colon_size = 0;
    char **map = NULL;

    if (ac != 2) {
        error("invalid number of args\n");
        return 84;
    }
    map = wraper(av[1], &rows_size, &colon_size);
    if (map == NULL)
        return 84;
    map = format_map(map, rows_size , colon_size);
    print_map(map);
    for (int i = 0; i < rows_size; ++i)
        free(map[i]);
    free(map);
    return 0;
}
