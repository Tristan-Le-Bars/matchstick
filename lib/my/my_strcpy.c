/*
** EPITECH PROJECT, 2018
** my_strcpy
** File description:
** function that copy a string into another.
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
