/*
** EPITECH PROJECT, 2018
** sum_stdarg.c
** File description:
** return the sum of the last nb arguments
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int my_strlen(char const *str);

int sum_stdarg(int i, int nb, ...)
{
    int result;
    int n;
    char *str;

    va_list list;
    va_start(list, nb);
    while (nb > 0) {
        if (i == 0) {
            n = va_arg(list, int);
            result = result + n;
        }
        if (i == 1) {
            str = va_arg(list, char *);
            result = result + my_strlen(str);
        }
        nb--;
    }
    va_end(list);
    return (result);
}
