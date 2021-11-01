/*
** EPITECH PROJECT, 2021
** task05
** File description:
** D06
*/

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int j = 0;

    for (int i = 0; i != my_strlen(str); i += 1) {
        if (to_find[j] == str[i]) {
            j += 1;
            if (j == my_strlen(to_find)) {
                return (&str[i - (j - 1)]);
            } else if (str[i + 1] != to_find[j]) {
                j = 0;
            }
        }
    }
    return ("NULL");
}
