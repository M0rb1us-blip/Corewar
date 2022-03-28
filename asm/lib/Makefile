##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Day10
##

SOURCE	=	my_printf.c	\
		search_flags.c	\
		printf_bad_flags.c	\
		put_hashtag.c	\
		modulo_c.c	\
		modulo_s.c	\
		modulo_int.c	\
		modulo_o.c	\
		modulo_x.c	\
		modulo_x_uppercase.c	\
		modulo_u.c	\
		modulo_p.c	\
		modulo_percent.c	\
		modulo_b.c	\
		modulo_s_uppercase.c	\
		lib/my_strcat.c	\
		lib/my_put_nbr.c	\
		lib/my_putchar.c	\
		lib/my_putstr.c	\
		lib/my_revstr.c	\
		lib/my_strlen.c	\
		lib/my_strcpy.c	\
		lib/my_strcmp.c	\
		lib/my_strncmp.c	\
		lib/my_getnbr.c

FORLIB	=	$(SOURCE:.c=.o)

POINT_H	=	include/my.h

TITLE	=	libmy.a

all:	$(TITLE)

fclean: clean
	rm -f $(TITLE)
	rm -f ../$(TITLE)

clean:
	rm -f $(FORLIB)

$(TITLE):	$(FORLIB)
	ar rc $(TITLE) $(FORLIB)
	mv $(TITLE) ../

re: fclean all
