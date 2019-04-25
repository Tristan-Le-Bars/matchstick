/*
** EPITECH PROJECT, 2018
** my_str_to_word_array
** File description:
** funtion that split a string into words
*/

#include <stdlib.h>
#include <stddef.h>

int counting_words(char const *str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (my_is_alphanum(str[i]) == 1 && my_is_alphanum(str[i + 1]) == 0) {
            count++;
            i++;
        }
    }
    return (count);
}

char **my_str_to_word_array(char const *str)
{
    int	j = 0;
    int	i = 0;
    char **tab;
    int	len = 0;

    tab = malloc((counting_words(str) + 1) * sizeof(char *));
    while (str[i] != '\0')
    {
        if (my_is_alphanum(str[i]))
            len = len + 1;
        if (my_is_alphanum(str[i]) == 1 && my_is_alphanum(str[i + 1]) == 0) {
            tab[j] = malloc(len + 1);
            my_strncpy(tab[j], &str[i - len + 1], len);
            len = 0;
            j++;
        }
        i++;
    }
    tab[j] = NULL;
    return (tab);
}

int main(int argc, char **argv)
{
    my_str_to_word_array("ceci est un test");
}
