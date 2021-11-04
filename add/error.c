/*
** EPITECH PROJECT, 2021
** error
** File description:
** error
*/

char *all_0(char *str, int len)
{
    int i = 1;

    while (str[len - i] == '0') {
        str[len - i] = '\0';
        i += 1;
    }
    if (str[0] == '\0')
        str[0] = '0';
    return (str);
}
