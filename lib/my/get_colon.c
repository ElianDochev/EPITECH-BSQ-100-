/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** checks the number of char in the first row
*/

#include "my.h"

int get_colon(char *filepath)
{
    int count = 0;

    for (int i = 0; filepath[i] != '\n'; ++i) {
        ++count;
    }
    return count;
}
