/*
** EPITECH PROJECT, 2021
** task03
** File description:
** D08
*/

#include <stdlib.h>

int my_putstr(char *str);

char *my_choice(int j, int argc)
{
    if (j != argc - 1) {
        return ("\n");
    } else {
        return ("\0");
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
