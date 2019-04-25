/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** function that reverse a string
*/

char *my_revstr(char *str)
{
    int i = 0;
    int d = 0;
    int p = 0;

    while (str[i] != '\0') {
        i++;
    }
    i--;
    while (i != d) {
        p = str[i];
        str[i] = str[d];
        str[d] = p;
        d++;
        i--;
    }
    return (str);
}
