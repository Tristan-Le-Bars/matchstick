/*
** EPITECH PROJECT, 2018
** my_str_isnum
** File description:
** test if a string have only numerical characters
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    while (str[i] != '\0') {
        if (str[i] < 48 || str[i] > 57)
            return (0);
        i++;
    }
    return (1);
}
