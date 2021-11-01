/*
** EPITECH PROJECT, 2021
** task01
** File description:
** D06
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (int lensrc = 0; src[lensrc] != '\0'; lensrc += 1){
        dest[lensrc] = src[lensrc];
    }
    return (dest);
}
