/*
** EPITECH PROJECT, 2021
** len-res
** File description:
** infin_add
*/

#include "../include/my.h"

int char_to_int(char c)
{
    int res = c - 48;
    return res;
}

char int_to_char(int i)
{
    char res = i + 48;

    return res;
}

int my_new_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i += 1;
    }
    if (str[0] == '0')
        i -= 1;
    return (i);
}

int len_res(char *str1, char *str2)
{
    int i = 0;

    if (my_new_strlen(str1) >= my_new_strlen(str2))
        i = my_new_strlen(str1);
    else
        i = my_new_strlen(str2);
    return i;
}
