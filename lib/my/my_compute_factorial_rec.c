/*
** EPITECH PROJECT, 2021
** task02
** File description:
** D05
*/

int my_compute_factorial_rec(int nb)
{
    int res;

    if (nb < 0){
        return (0);
    }
    if (nb > 12){
        return (0);
    }
    if (nb == 0){
        return (1);
    }
    if (nb == 1){
        return (1);
    }
    res = nb * my_compute_factorial_rec(nb - 1);
    return (res);
}
