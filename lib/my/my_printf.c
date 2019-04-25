/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** print whatever you want
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/struct_printf.h"
#include "../../include/my.h"

int if_function(char *str, int a, va_list list)
{
    int b = 0;
    int c = 0;
    int j = 0;

    while (b < 12) {
        if (str[a] == tab[b].d) {
            (tab[b]).point_f(list);
            j++;
            return (j);
        }
        b++;
    }
    return (j);
}

int my_printf(char *str, ...)
{
    va_list list;
    int i = 0;
    int j = 0;
    int a = 0;

    va_start(list, str);
    while (str[j] != '\0') {
        if (str[j] == '%') {
            a = j + 1;
            j += if_function(str, a, list);
        } else
            my_putchar(str[j]);
        j++;
    }
    va_end(list);
}
