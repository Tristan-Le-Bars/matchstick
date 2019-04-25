/*
** EPITECH PROJECT, 2018
** my_str_isalphanum
** File description:
** test if a string have only alphanumeric characters
*/

int my_is_alphanum(char c)
{
    if (c <= ' ' || c >= 127)
        return (0);
    return (1);
}

