/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** it's a function that returns the square root (if it's a whole number).
*/

int my_compute_square_root(int nb)
{
    int i;

    while ((i * i) != nb) {
        if ((i*i) > nb) {
            return (0);
        }
        i++;
    }
    return (i);
}
