/*
** EPITECH PROJECT, 2018
** my_compute_power.c
** File description:
** an recursive function that returns the first argument raised to the power p.
*/

int my_compute_power_rec(int nb, int p)
{
    int result = nb;
    int d = p;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    if (d >= 1) {
        result = result * my_compute_power_rec(nb, d - 1);
        return (result);
    }
}
