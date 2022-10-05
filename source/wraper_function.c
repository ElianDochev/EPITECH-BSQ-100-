/*
** EPITECH PROJECT, 2022
** wrapper_function
** File description:
** this shortens the lines in main
*/

#include "my.h"
#include "stdio.h"

char **wraper(char *filepath, int *rows_size, int *colon_size)
{
    char *file_str = open_file(filepath);
    char **map = NULL;

    if (check_fl(file_str))
        return NULL;
    *rows_size = get_number(file_str);
    file_str = remove_first_line(file_str);
    *colon_size = get_colon(file_str);
    if (check_line_content(file_str, *rows_size, *colon_size)) {
        error("invalid content of file\n");
        return NULL;
    }
    if (file_str == NULL)
        return NULL;
    map = create_map(file_str, *rows_size, *colon_size);
    return map;
}
