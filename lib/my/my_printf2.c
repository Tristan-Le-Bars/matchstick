/*
** EPITECH PROJECT, 2018
** part1
** File description:
** contain the first part of the functions
*/

#include <stdarg.h>
#include <stdio.h>
#include "../../include/my.h"

void number(va_list list)
{
    my_putnbr(va_arg(list, int));
}

void characters(va_list list)
{
    my_putchar(va_arg(list, int));
}

void string(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void octal(va_list list)
{
    my_putoct(va_arg(list, int));
}

void hexmin(va_list list)
{
    my_puthex_min(va_arg(list, int));
}
