/*
** EPITECH PROJECT, 2021
** task03
** File description:
** all
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
