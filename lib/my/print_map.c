/*
** EPITECH PROJECT, 2022
** UNility function
** File description:
** outputs the maps content
*/

#include "my.h"

void print_map(char **map)
{
    for (int i = 0; map[i] != NULL; ++i) {
        write(1, map[i], my_strlen(map[i]));
        write(1, "\n", 1);
    }
}
