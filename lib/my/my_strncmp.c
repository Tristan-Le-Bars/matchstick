/*
** EPITECH PROJECT, 2018
** my_strncmp
** File description:
** task06
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int occurence = 0;

    while (my_strlen(s1) != '\0' && my_strlen(s2) != '\0' && i < n) {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] == s2[i]){
            occurence++;
            i++;
        }
        if (occurence == n)
            return (0);
    }
}
