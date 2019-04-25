/*
** EPITECH PROJECT, 2018
** my_puthex_maj
** File description:
** convert a decimal number into an hexadecimal one
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c);

void my_putstr(char const *str);

char *my_revstr(char *str);

char *my_puthex_maj(int nb)
{
    char *base = "0123456789ABCDEF";
    int i = 0;
    int modulo;

    if (nb >= 16) {
        modulo = nb % 16;
        nb = (nb - modulo) / 16;
        my_puthex_maj(nb);
        my_putchar(base[modulo]);
        i++;
    }
    else
        my_putchar(base[nb]);
}
