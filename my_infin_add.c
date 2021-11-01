/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** proto
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

int len_res(char *str1, char *str2);

int my_putstr(char const *str);

char *my_revstr(char *str);

int char_to_int(char c);

char int_to_char(int i);

int my_strlen(char const *str);

int if_neg(char *str)
{
    int i = 1;

    if (str[0] == '-') {
        str[0] = '0';
        i = -1;
    }
    return i;
}

char *equality_len(char *str, int len)
{
    char *src = malloc(sizeof(char) * len + 1);

    for (int i = 0; i < len; i += 1) {
        src[i] = str[i];
        if (i >= my_strlen(str)) {
            src[i] = '0';
        }
    }
    src[len + 1] = '\0';
    return (src);
}

char *add_retenue(int retenue, char *str, int len)
{
    if (retenue == 1)
        str[len] = '1';
    else if (retenue == -1)
        str[len] = '-';
    return str;
}

int my_infin_add(int argc, char **argv)
{
    int n1 = if_neg(argv[1]);
    int n2 = if_neg(argv[2]);
    int len = len_res(argv[1], argv[2]);
    argv[1] = equality_len(my_revstr(argv[1]), len);
    argv[2] = equality_len(my_revstr(argv[2]), len);
    int idx = 0;
    int retenue = 0;
    char *result = malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < len; i += 1) {
        idx = (n1 * char_to_int(argv[1][i]))
        + (n2 * char_to_int(argv[2][i])) + retenue;
        retenue = 0;
        if (idx < 0) {
            retenue -= 1;
            idx += 10;
        } if (idx > 9) {
            retenue += 1;
            idx -= 10;
        }
        result[i] = int_to_char(idx);
    }
    result = add_retenue(retenue, result, len);
    result = my_revstr(result);
    my_putstr(result);
    my_putchar('\n');
    free(result);
    free(argv[1]);
    free(argv[2]);
    return 0;
}
