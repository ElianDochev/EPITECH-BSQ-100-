/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** Checks for invalide file contents
*/

#include "my.h"

bool check_col(char const *file_content, int colon_size)
{
    int count_col = 0;

    for (int i = 0; file_content[i] != '\0'; ++i) {
        if (file_content[i] == '\n') {
            if (count_col != colon_size)
                return true;
            count_col = 0;
            continue;
        }
        if (file_content[i] != '.' && file_content[i] != 'o')
            return true;
        ++count_col;
    }
    return false;
}

bool check_rows(char const *file_content, int rows_size)
{
    int count_rows = 0;

    for (int i = 0; file_content[i] != '\0'; ++i) {
        if (file_content[i] == '\n') {
            ++count_rows;
        }
    }
    if (count_rows != rows_size)
        return true;
    return false;
}
