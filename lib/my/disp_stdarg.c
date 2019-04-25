/*
** EPITECH PROJECT, 2018
** disp_stdarg
** File description:
** display
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_putnbr(int nb);

int disp_stdarg(char *s, ...)
{
    int i = 0;
    va_list list;

    va_start(list, s);
    while (s[i] != '\0') {
        if (s[i] == 'c')
            my_putchar(va_arg(list, int));
        if (s[i] == 's')
            my_putstr(va_arg(list, char *));
        if (s[i] == 'i')
            my_putnbr(va_arg(list, int));
        i++;
        my_putchar('\n');
    }
    va_end(list);
}
