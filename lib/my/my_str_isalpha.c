/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** test if a string have only alpha characters
*/

int my_strlen(char const *str);

int my_str_isalpha(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
            count++;
        if (str[i] == ' ')
            count++;
    }
    if (count == my_strlen(str) || my_strlen(str) == 0)
        return (1);
    else
        return (0);
}
