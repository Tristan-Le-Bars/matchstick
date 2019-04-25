/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** description
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 1;
    int n = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            neg = neg * -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            n = n * 10;
            n = n + str[i] - '0';
            i++;
        }
        else
            return (n * neg);
    }
    return (n * neg);
}