/*
** EPITECH PROJECT, 2018
** my_strn_cpy.c
** File description:
** function that copies n characters from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (;src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (i  >= n) {
        dest[i] = '\0';
    }
    return (dest);
}
