/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** proto
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);
int len_res(char *str1, char *str2);
int my_putstr(char const *str);
char *my_revstr(char *str);
int char_to_int(char c);
char int_to_char(int i);
int my_strlen(char const *str);
char *all_0(char *str, int len);
int my_show_word_array(char * const *tab);
char **my_swap_str(char *str1, char *str2, int n1, int n2);
char *my_strcat(char *dest, char const *src);

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
    src[len] = '\0';
    return (src);
}

char *add_retenue(int retenue, char *str, int len)
{
    if (retenue == 1)
        str[len] = '1';
    return str;
}

char *simple_add(char *result, char **argv, int n1, int n2, int idx, int len, int retenue)
{
    for (int i = 0; i < len; i += 1) {
        idx = char_to_int(argv[1][i])
            + char_to_int(argv[2][i]) + retenue;
        retenue = 0;
        if (idx > 9) {
            retenue += 1;
            idx -= 10;
        }
        result[i] = int_to_char(idx);
    }
    result = add_retenue(retenue, result, len);
    result = all_0(result, len);
    return (result);
}

char *simple_sub(char *result, char **argv, int n1, int n2, int idx, int len, int retenue)
{
    char **str3;

    str3 = my_swap_str(argv[1], argv[2], n1, n2);
    argv[1] = equality_len(str3[1], len);
    argv[2] = equality_len(str3[2], len);
    for (int k = 0; k < len; k += 1) {
        idx = char_to_int(argv[1][k])
            - char_to_int(argv[2][k]) + retenue;
        retenue = 0;
        if (idx < 0) {
            retenue -= 1;
            idx += 10;
        }
        result[k] = int_to_char(idx);
    }
    result = all_0(result, len);
    if (**str3 == '-')
        result = my_strcat(result, "-");
    return (result);
}

char *my_infin_add(int argc, char **argv)
{
    int n1 = if_neg(argv[1]);
    int n2 = if_neg(argv[2]);
    int len = len_res(argv[1], argv[2]) + 1;
    argv[1] = equality_len(my_revstr(argv[1]), len);
    argv[2] = equality_len(my_revstr(argv[2]), len);
    int idx = 0;
    int retenue = 0;
    char *result;

    result = malloc(sizeof(char) * (len + 1));
    if (n1 == 1 && n2 == 1){
        result = simple_add(result, argv, n1, n2, idx, len, retenue);
        result = my_revstr(result);
        return (result);
    } else if (n1 == -1 && n2 == -1) {
        result = simple_add(result, argv, n1, n2, idx, len, retenue);
        result[my_strlen(result)] = '-';
        result = my_revstr(result);
        return (result);
    } else {
        result = simple_sub(result, argv, n1, n2, idx, len, retenue);
        result = my_revstr(result);
        return (result);
    }
    free(argv[1]);
    free(argv[2]);
    return 0;
}
