/*
** EPITECH PROJECT, 2021
** my_swap_str
** File description:
** read the fucking name
*/

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
        return (" ");
    } else {
        return ("\n\0");
    }
}

int my_show_word_array(char * const *tab)
{
    int j = 0;

    while (tab[j] != 0){
        j += 1;
    }
    for (int i = 0; tab[i] != 0; i += 1) {
        my_putstr(tab[i]);
        my_putstr(my_choice(i, j));
    }
    return (0);
}

char **my_swap_str(char *str1, char *str2)
{
    char **str3 = malloc(sizeof(char *) * 3);
    str3[0] = malloc(sizeof(char) * 1);
    str3[2] = malloc(sizeof(char) * strlen(str2) + 1);
    str3[1] = malloc(sizeof(char) * strlen(str1) + 1);
    int uno = my_strlen(all_0(str1, strlen(str1)));
    int dos = my_strlen(all_0(str2, strlen(str2)));

    if (uno < dos) {
        str3[0] = "1";
        str3[1] = str2;
        str3[2] = str1;
    } else if (uno == dos && str1[uno - 1] < str2[uno - 1]){
	str3[0] = "1";
        str3[1] = str2;
        str3[2] = str1;
    } else {
	str3[0] = "0";
        str3[1] = str1;
	str3[2] = str2;
}
    my_show_word_array(str3);
    return str3;
}