/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** contains the prototypes of all the functions exposed by libmy.a
*/

#include <stdarg.h>
#include "get_next_line.h"

void my_putchar (char c );
int my_isneg (int nb);
int my_putnbr (int nb);
void my_swap (int *a, int *b);
int my_putstr (char const *str);
int my_strlen (char const *str);
int my_getnbr (char const *str);
void my_sort_int_array (int *tab, int size);
int my_compute_power_rec (int nb, int power);
int my_compute_square_root (int nb);
int my_is_prime (int nb);
int my_is_alphanum (char c);
int my_find_prime_sup (int nb);
char *my_strcpy (char *dest, char const *src);
char *my_strncpy (char *dest, char const *src, int n);
char *my_revstr (char *str);
char *my_strstr (char *str, char const *to_find);
int my_strcmp (char const *s1, char const *s2);
int my_strncmp (char const *s1, char const *s2, int n);
char *my_strupcase (char *str);
char *my_strlowcase (char *str);
char *my_strcapitalize (char *str);
int my_str_isalpha (char const *str);
int my_str_isnum (char const *str);
int my_str_islower (char const *str);
int my_str_isupper (char const *str);
int my_str_isprintable (char const *str);
int my_showstr (char const *str);
int my_showmem (char const *str, int size);
char *my_strcat (char *dest, char const *src);
char *my_strncat (char *dest, char const *src, int nb);
int sum_stdarg(int i, int nb, ...);
int my_putoct(int nb);
char *my_puthex_maj(int nb);
char *my_puthex_min(int nb);
int my_putbin(int nb);
void number(va_list);
void characters(va_list);
void string(va_list);
void octal(va_list);
void hexmin(va_list);
void hexmaj(va_list);
void put_modulo(va_list);
void put_address(va_list);
void put_bin(va_list);
void put_invascii(va_list);
void my_putstr_invascii(char const *str);
int if_function(char * str, int a, va_list list);
int my_printf(char * str, ...);
char *update_line(char *buffer, char *line);
int previous_line_char(char *line);
char *my_strndup(char *line, int sup_char);
char *get_next_line(int fd);
