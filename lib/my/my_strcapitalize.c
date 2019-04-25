/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** task09
*/

#include <stdio.h>

char *my_strcapitalize(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z') {
        str[0] = str[0] - 32;
    }
    while (str[i] != '\0') {
        if (str[i -1] >= 21 && str[i - 1] <= 47)
            str[i] = str[i] - 32;
        if (str[i - 1] > 57 && str[i - 1] > 'Z')
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}
