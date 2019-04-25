/*
** EPITECH PROJECT, 2018
** my_put_int_tab
** File description:
** function that displays, one by one the characters of a string
*/

#include <unistd.h>

int my_putnbr(int nb);

int *my_put_intstr(int *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putnbr(str[i]);
        i++;
    }
}