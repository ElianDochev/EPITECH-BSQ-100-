/*
** EPITECH PROJECT, 2022
** HEADER file
** File description:
** contains all the lib funtions
*/

#ifndef NULL
    #define NULL ((void *)0)
#endif
#ifndef HEADER_H
    #define HEADER_H
    //boolean data type definition
    typedef enum {false, true} bool;
    // returns str len
    int my_strlen(char const *str);
    // returns error MSG
    void error (char *str);
    // prints out a str in stdin
    void my_putstr(char const *str);
    // converts an int to str
    char *int_to_str(int scr);
    // print the content of an array line by line
    void array_1d_print_chars (char const *arr);
    // allocs a 2d char array
    char **mem_alloc_2d_array(int nb_rows, int nb_cols);
    // loads the file in mem as a string
    char *load_file_in_mem(char const *filepath);
    // retuns true if char is a digit
    bool is_digit(char ch);
    // converts a string to int
    int str_to_int (char *scr);
    // check is the first line is correct
    bool check_fl(char *file_content);
    // gets the number from the first line;
    int get_number(char *file_content);
    // gets the number of chars in the first row
    int get_colon(char *filepath);
    // removes the first line from the str (mallocs a new one, frees the old)
    char *remove_first_line(char *file_content);
    // opens a file
    char *open_file(char *filepath);
    //check if the number is incorect col and rows
    bool check_line_content(char *file_content ,
    int rows_size, int colon_size);
    // verifyes colons
    bool check_col(char const *file_content, int colon_size);
    // verifiyes rows
    bool check_rows(char const *file_content, int rows_size);
    //wraper for the coding style
    char **wraper(char *filepath, int *rows_size, int *colon_size);
    //creates the map
    char **create_map(char *file_str, int rows_size, int colon_size);
    //formats the map
    char **format_map(char **map, int rows_size, int colon_size);
    //outputs the maps content
    void print_map(char **map);
    //free the metrix
    void free_matrix(int **matrix, int size);
#endif
