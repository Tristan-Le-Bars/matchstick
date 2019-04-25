##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile my libmy
## 	

SRC	=	my_putnbr.c	\
		my_strcpy.c	\
		my_strncmp.c	\
		my_compute_power_rec.c	\
		my_putstr.c	\
		my_str_isalpha.c	\
		my_strncpy.c	\
		my_compute_square_root.c	\
		my_revstr.c	\
		my_str_islower.c	\
		my_strstr.c	\
		my_find_prime_sup.c	\
		my_showmem.c	\
		my_str_isnum.c	\
		my_getnbr.c	\
		my_showstr.c	\
		my_str_is_printable.c	\
		my_strupcase.c	\
		my_sort_int_array.c	\
		my_str_isupper.c	\
		my_swap.c	\
		my_isneg.c	\
		my_strcapitalize.c	\
		my_strlen.c	\
		my_is_prime.c	\
		my_strcat.c	\
		my_strlowcase.c	\
		my_putchar.c	\
		my_strcmp.c	\
		my_strncat.c	\
		disp_stdarg.c	\
		sum_stdarg.c	\
		my_putoct.c	\
		my_puthex_maj.c	\
		my_puthex_min.c	\
		my_putbin.c	\
		my_putstr_invascii.c	\
		my_printf.c	\
		my_printf2.c	\
		my_printf3.c    \


OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS +=   -I./include/

all:	$(NAME)

$(NAME): $(OBJ)	
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
