/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** swap the content of two integers
*/

int my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
