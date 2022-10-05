/*
** EPITECH PROJECT, 2022
** map_format.c
** File description:
** formats the map(aka replaces . with X)
*/

#include "my.h"
#include "stdio.h"
#include "stdlib.h"

int to_int(char ch)
{
    if (ch == '.')
        return 1;
    else
        return 0;
}

int min(int a, int b, int c)
{
    int tmp = a;

    if (tmp > b)
        tmp = b;
    if (tmp > c)
        tmp = c;
    return tmp;
}

void init_matrix(int **squares, char **map, int rows_size, int colon_size)
{
    for (int i = 0; i < rows_size; ++i) {
        squares[i][0] = to_int(map[i][0]);
    }
    for (int i = 0; i < colon_size; ++i) {
        squares[0][i] = to_int(map[0][i]);
    }
    for (int i = 1; i < rows_size; ++i) {
        for (int j = 1; j < colon_size; ++j) {
            if (map[i][j] == '.')
                squares[i][j] = min(squares[i][j-1], squares[i - 1][j],
                squares[i - 1][j - 1]) + 1;
            else
                squares[i][j] = 0;
        }
    }
}

int **alloc_metrix(int rows_size, int colon_size)
{
    int **squares = (int **) malloc((rows_size) * sizeof(int *));

    for (int i = 0; i < rows_size; ++i)
        squares[i] = (int *) malloc(colon_size * sizeof(int));
    for (int i = 0; i < rows_size; ++i) {
        for (int j = 0; j < colon_size; ++j)
            squares[i][j] = 0;
    }
    return squares;
}

char **format_map(char **map, int rows_size, int colon_size)
{
    int **squares = alloc_metrix(rows_size, colon_size);
    int max_of_squares;
    int maxes[2] = {0, 0};

    init_matrix(squares, map, rows_size, colon_size);
    max_of_squares = squares[0][0];
    for (int i = 0; i < rows_size; i++) {
        for (int j = 0; j < colon_size; j++) {
            if (max_of_squares < squares[i][j]) {
                max_of_squares = squares[i][j];
                maxes[0] = i;
                maxes[1] = j;
            }
        }
    }
    for (int i = maxes[0]; i > maxes[0] - max_of_squares; i--)
        for (int j = maxes[1]; j > maxes[1] - max_of_squares; j--)
            map[i][j] = 'x';
    free_matrix(squares, rows_size);
    return map;
}
