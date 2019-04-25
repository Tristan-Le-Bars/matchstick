/*
** EPITECH PROJECT, 2018
** struct
** File description:
** stucture for my_printf
*/

#include "my.h"

struct exemple {
    char d;
    void (*point_f)(va_list);
};

const struct exemple tab[12] = {
    {'i', &number},
    {'d', &number},
    {'u', &number},
    {'s', &string},
    {'c', &characters},
    {'o', &octal},
    {'%', &put_modulo},
    {'x', &hexmin},
    {'X', &hexmaj},
    {'p', &put_address},
    {'b', &put_bin},
    {'S', &put_invascii}
};
