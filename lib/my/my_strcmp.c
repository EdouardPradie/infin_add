/*
** EPITECH PROJECT, 2021
** task06
** File description:
** D06
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int a = my_strlen(s1) + 1;
    int b = my_strlen(s2) + 1;
    int r;

    for (int i = 0; i != a && i != b; i += 1) {
        if (s1[i] != s2[i]) {
            r += s1[i] - s2[i];
            return (r);
        }
    }
    return (0);
}
