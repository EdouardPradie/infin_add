/*
** EPITECH PROJECT, 2021
** task02
** File description:
** D07
*/
#include <stdlib.h>

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
    int d = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0'){
        dest[d + i] = src[i];
        i += 1;
    }
    dest[d + i] = '\0';
    return (dest);
}
