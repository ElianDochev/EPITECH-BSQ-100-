/*
** EPITECH PROJECT, 2022
** Utility function
** File description:
** convert string to int
*/


int str_to_int (char *scr)
{
    int number = 0;
    int i = 0;

    while (scr[i]) {
        number = number * 10 + (scr[i] - '0');
        ++i;
    }
    return number;
}
