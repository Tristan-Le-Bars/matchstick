/*
** EPITECH PROJECT, 2018
** my_find_prime_sup.c
** File description:
** a function that returns the smallest prime number
*/

int my_find_prime_sup(int nb)
{
    int c = nb;

    if (nb <= 1) {
        return (0);
    }
    for (int i = 2; i < nb; i++) {
        if (c % i == 0) {
            c++;
        }
    }
    return (c);
}
