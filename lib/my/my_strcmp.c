/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** return an integer if s1 is less, match or is greater than s2
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int occurence = 0;

    while (my_strlen(s1) != '\0' && my_strlen(s2) != '\0') {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] == s2[i]){
            occurence++;
            i++;
        }
        if (occurence == my_strlen(s1) && occurence == my_strlen(s2))
            return (0);
    }
}
