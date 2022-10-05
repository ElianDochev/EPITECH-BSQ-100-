/*
** EPITECH PROJECT, 2022
** check_first_line
** File description:
** gives a workable string + errors
*/

#include <stdlib.h>
#include "my.h"

bool check_fl(char *file_content) {
    if (file_content == NULL)
        return true;
    for (int i = 0; file_content[i] != '\n'; ++i) {
        if (!is_digit(file_content[i])){
            error("invalid first line\n");
            return true;
        }
    }
    return false;
}

int get_number(char *file_content)
{
    int len = 0;
    char *tmp = NULL;
    int res = 0;

    for (int i = 0; file_content[i] != '\n'; ++i)
        ++len;
    tmp = malloc(len + 1);
    for (int i = 0; file_content[i] != '\n'; ++i)
        tmp[i] = file_content[i];
    tmp[len] = '\0';
    res = str_to_int(tmp);
    free(tmp);
    return res;
}

char *remove_first_line(char *file_content)
{
    char *new = NULL;
    int len = my_strlen(file_content);
    unsigned int i;
    unsigned int j;

    for (i = 0; file_content[i] != '\0'; ++i) {
        if (file_content[i] == '\n'){
            ++i;
            break;
        }
    }
    new = malloc((len - i) + 1);
    for (j = 0; file_content[i] != '\0'; ++j) {
        new[j] = file_content[i];
        ++i;
    }
    new[j] = '\0';
    free(file_content);
    return new;
}

bool check_line_content(char *file_content , int rows_size, int colon_size)
{
    if (check_col(file_content, colon_size) ||
    check_rows(file_content, rows_size))
        return true;
    else
        return false;
}

void free_matrix(int **matrix, int size)
{
    for (int i = 0; i < size; ++i)
        free(matrix[i]);
    free (matrix);
}
