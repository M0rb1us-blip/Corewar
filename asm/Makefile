##
## EPITECH PROJECT, 2021
## B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
## File description:
## Makefile
##

SRC	=	main.c	\
		src/load_2d_array_from_file.c	\
		src/fill_2d_array.c	\
		src/malloc_2d_array.c	\
		src/find_name_text.c	\
		src/find_comment_text.c	\
		src/find_type.c	\
		src/find_type2.c	\
		src/do_type.c 	\
		src/is_label_s.c	\
		src/count_char.c	\
		linked_list/del_list.c 	\
		linked_list/show_list.c \
		linked_list/list_add_at_back.c	\
		linked_list/list_add_at_front.c	\
		src/header.c	\
		src/check_com_or_dots.c \
		src/my_malloc.c \
		src/parsing.c \
		src/str_to_word_array.c \
		src/free_it.c \
		op.c		\
		src/bytes_management.c	\
		src/bytes_management2.c	\
		src/bintoint.c			\
		src/inttobin.c			\
		src/separate_oct.c		\
		src/parse_for_codingbyte.c \
		src/pos_byte.c				\
		src/get_wich_label.c		\
		src/create_file.c		\
		src/instruction_print.c	\
		src/check_maj.c


OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -I include -Ofast -g

LDFLAGS	+=	-lm

NAME	=	asm

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/ re
		make -C lib/ clean
		gcc -o $(NAME) $(CFLAGS) $(OBJ) $(LDFLAGS) -L./ -lmy

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		make -C lib/ fclean

re:		fclean all

.PHONY:		all clean fclean re