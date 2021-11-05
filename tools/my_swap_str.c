/*
** EPITECH PROJECT, 2021
** my_swap_str
** File description:
** read the fucking name
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../include/my.h"

char *all_0(char *str, int len);
int my_putstr(char const *str);

void my_putstr2(char **str, int y)
{
    int i = 0;
    int cont = 0;

    while (cont <= 1)
    {
        my_putstr(str[cont]);
        cont++;
    }
}

char *my_choice(int j, int argc)
{
    if (j != argc - 1) {
        return ("\n");
    } else {
        return ("\n\0");
    }
}

int my_show_word_array(char * const *tab)
{
    int j = 0;

    while (tab[j] != NULL){
        j += 1;
    }
    for (int i = 0; tab[i] != 0; i += 1) {
        my_putstr(tab[i]);
        my_putstr(my_choice(i, j));
    }
    return (0);
}

char *my_neg_to_str(int neg)
{
    char *str = malloc(sizeof(char) * 3);

    str[1] = '1';
    str[2] = '\0';
    if (neg == 1)
        str[0] = '+';
    else
        str[0] = '-';
    return (str);
}

char **my_swap_str(char *str1, char *str2, int n1, int n2)
{
    char *strn1 = my_neg_to_str(n1);
    char *strn2 = my_neg_to_str(n2);
    char **str3 = malloc(sizeof(char *) * 4);
    int uno = my_strlen(all_0(str1, my_strlen(str1)));
    int dos = my_strlen(all_0(str2, my_strlen(str2)));

    str3[0] = malloc(sizeof(char) * 3);
    str3[2] = malloc(sizeof(char) * (my_strlen(str2) + 1));
    str3[1] = malloc(sizeof(char) * (my_strlen(str1) + 1));
    str3[3] = NULL;
    if (uno < dos) {
        str3[0] = strn2;
        str3[1] = str2;
        str3[2] = str1;
    } else if (uno == dos && str1[uno - 1] < str2[uno - 1]) {
        str3[0] = strn2;
        str3[1] = str2;
        str3[2] = str1;
    } else {
        str3[0] = strn1;
        str3[1] = str1;
	str3[2] = str2;
    }
    return str3;
}
