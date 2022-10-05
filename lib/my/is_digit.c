/*
** EPITECH PROJECT, 2022
** Utility function
** File description:
** return true if cahr is a digit
*/

#include "my.h"

bool is_digit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return true;
    else
        return false;
}
