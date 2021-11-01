/*
** EPITECH PROJECT, 2021
** eval_expr.c
** File description:
** eval_expr.c
*/

#include "../include/my.h"

char	*no_space(char *str)
{
    int	i = 0;
    int	j = 0;
    char	*str2 = malloc(my_strlen(str) + 1);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str2[j] = str[i];
            j = j + 1;
        }
        i = i + 1;
    }
    str2[j] = '\0';
    return (str2);
}

int	parser(char **str)
{
    int   nb = 0;
    int   sign = 1;

    if ((*str)[0] == '+' || (*str)[0] == '-') {
        if ((*str)[0] == '-')
            sign = -1;
        *str = *str + 1;
    }
    if ((*str)[0] == '(') {
        *str = *str + 1;
        nb = eval_expr_add_sub(str);
        if ((*str)[0] == ')')
            *str = *str + 1;
        return (sign * nb);
    }
    while ('0' <= (*str)[0] && (*str)[0] <= '9') {
        nb = (nb * 10) + (*str)[0] - '0';
        *str = *str + 1;
    }
    return (sign * nb);
}

int	eval_expr_add_sub(char **str)
{
    int	left;
    int	right;
    char	op;

    left = parser(str);
    while ((*str)[0] != '\0' && (*str)[0] != ')') {
        op = (*str)[0];
        *str = *str + 1;
        if (op == '+' || op == '-')
            right = eval_expr_prod(str);
        else
            right = parser(str);
        left = calc(left, right, op);
    }
    return (left);
}

int	eval_expr_prod(char **str)
{
    int	left;
    int	right;
    char	op;

    left = parser(str);
    while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%') {
        op = (*str)[0];
        *str = *str + 1;
        right = parser(str);
        left = calc(left, right, op);
    }
    return (left);
}

int	eval_expr(char *str)
{
    str = no_space(str);
    if (str[0] == '\0')
        return (0);
    return (eval_expr_add_sub(&str));
}
