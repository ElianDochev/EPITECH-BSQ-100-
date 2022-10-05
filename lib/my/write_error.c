/*
** EPITECH PROJECT, 2022
** Utility function
** File description:
** writes an error msg to stderr
*/


#include <unistd.h>

void error(char *str)
{
    write(2, str, my_strlen(str));
}
