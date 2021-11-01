/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** PART_2
*/

#include <stdbool.h>
#include "include/my.h"

int my_infin_add(int argc, char **argv);

bool check_error(int ac, char **av)
{
    if (ac != 3)
        return false;
    if (my_str_isnum(av[1]) != 1 || my_str_isnum(av[2]) != 1)
        return false;
    return true;
}

int main(int ac, char **av)
{
    if(check_error(ac, av))
        my_infin_add(ac, av);
    else {
        my_putstr("Invalid args\n");
        return 84;
    }
    return 0;
}
