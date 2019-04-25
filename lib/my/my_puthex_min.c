/*
** EPITECH PROJECT, 2018
** my_puthex_min
** File description:
** description
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c);

char *my_revstr(char *str);

void my_putstr(char const *str);

void my_puthex_min(unsigned int nb)
{
    char *base = "0123456789abcdef";
    int modulo;

    if (nb >= 16) {
        modulo = nb % 16;
        nb = (nb - modulo) / 16;
        my_puthex_min(nb);
        my_putchar(base[modulo]);
    }
    else
        my_putchar(base[nb]);
}
