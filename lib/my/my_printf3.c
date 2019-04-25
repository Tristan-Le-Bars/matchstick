/*
** EPITECH PROJECT, 2018
** part2
** File description:
** contain the 2nd part of the essential functions
*/

#include <stdarg.h>
#include <stdio.h>
#include "../../include/my.h"

void hexmaj(va_list list)
{
    my_puthex_maj(va_arg(list, int));
}

void put_modulo(va_list list)
{
    my_putchar('%');
}

void put_address(va_list list)
{
    my_putstr("0x");
    my_puthex_min(va_arg(list, unsigned int));
}

void put_bin(va_list list)
{
    my_putbin(va_arg(list, unsigned int));
}

void put_invascii(va_list list)
{
    my_putstr_invascii(va_arg(list, char *));
}
