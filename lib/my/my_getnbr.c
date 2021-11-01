/*
** EPITECH PROJECT, 2021
** task05
** File description:
** 5
*/

int my_putstr(char const *str);

char *first_number(int a, char const *str)
{
    char *src;
    int J = 0;
    int j = a;

    if (str[j] >= '0' && str[j] <= '9') {
        while (str[j] >= '0' && str[j] <= '9') {
            src[J] = str[j];
            j += 1;
            J += 1;
        }
        src[J] = '\0';
        return (src);
    }
}

int my_getnbr(char const *str)
{
    int j = 0;
    int i = 0;
    char *src;

    while (str[j] != '\0' && src[0] == '\0') {
        src = first_number(j, str);
        j += 1;
    }
    my_putstr(src);
}
