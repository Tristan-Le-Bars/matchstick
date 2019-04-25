/*
** EPITECH PROJECT, 2018
** my_putoct
** File description:
** description
*/

void my_putchar(char c);

void my_putoct(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 7) {
        my_putoct(nb / 8);
        my_putoct(nb % 8);
    }
    else
        my_putchar(nb + '0');
}
