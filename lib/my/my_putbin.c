/*
** EPITECH PROJECT, 2018
** my_putbin
** File description:
** description
*/

void my_putchar(char c);

void my_putbin(int nb)
{
    char *base = "01";
    int modulo;

    if (nb > 1) {
        modulo = nb % 2;
        nb = (nb - modulo) / 2;
        my_putbin(nb);
        my_putchar(base[modulo]);
    }
    else
        my_putchar(base[nb]);
}
