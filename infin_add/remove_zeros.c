/*
** EPITECH PROJECT, 2021
** remove_zeros
** File description:
** 001 to 1
*/

char *remove_zeros(char *str)
{
    int i = 0;
    int c = 0;
    int len = my_strlen(str);
    char *res = malloc(len + 1);

    while (str[i] != '\0') {
        if (str[i] == '0')
            c += 1;
        if (str[i] <= '9' && str[i] >= '1')
            c = 0;
        i += 1;
    }
    i = 0;
    while (i != (len - c)) {
        res[i] = str[i];
        i += 1;
    }
    res[i] = 0;
    return res;
}
