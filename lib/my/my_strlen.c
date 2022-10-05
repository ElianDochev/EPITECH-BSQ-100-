/*
** EPITECH PROJECT, 2022
** Utility function
** File description:
** return the lenght of a string
*/

int my_strlen(char *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        ++len;
    }
    return len;
}
