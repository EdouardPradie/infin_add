/*
** EPITECH PROJECT, 2021
** calc.c
** File description:
** calc.c
*/

int calc(int left, int right, char op)
{
    if (op == '+')
        return (left + right);
    if (op == '-')
        return (left - right);
    if (op == '*')
        return (left * right);
    if (op == '/')
        return (left / right);
    if (op == '%')
        return (left % right);
    else
        return (0);
}
