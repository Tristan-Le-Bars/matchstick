/*
** EPITECH PROJECT, 2018
** my_putstr_invascii.c
** File description:
** description
*/
#include <unistd.h>
#include "../../include/my.h"

void my_putstr_invascii(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 00 && str[i] < 7) {
            my_putstr("\\00");
            my_putoct(str[i]);
        }
        if (str[i] > 7 && str[i] < 32) {
            my_putstr("\\0");
            my_putoct(str[i]);
        }
        if (str[i] == 127)
            my_putoct(str[i]);
        else {
        my_putchar(str[i]);
        }
        i++;
    }
}
