##
## EPITECH PROJECT, 2021
## B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
## File description:
## Makefile
##

SRC			=	main.c										\
				src/list_handling/create_list.c				\
				src/list_handling/add_to_list.c				\
				src/list_handling/destroy_list.c			\
				src/arg_handling/argument_handling.c		\
				src/arg_handling/argument_error_handling.c	\
				src/utils/end_of_file.c						\
				src/utils/my_strlen.c						\
				src/utils/my_strcmp.c						\
				src/utils/is_num.c								\
				src/parcing_handling/parse_header.c				\
				src/parcing_handling/parse_instructions.c		\
				src/parcing_handling/parse_args.c				\
				src/utils/my_get_nbr.c							\
				src/champ_handling/create_champion.c			\
				src/list_handling/get_list_len.c				\
				src/arg_handling/is_option_valid.c				\
				src/arg_handling/check_arguments.c				\
				src/arg_handling/check_champion_nb_error.c		\
				src/arg_handling/add_champ_from_arg.c			\
				src/champ_handling/champion_dup.c				\
				src/champ_handling/push_champion.c				\
				src/champ_handling/get_champion_info.c			\
				src/parcing_handling/fill_arg.c					\
				src/parcing_handling/reverse_bytes.c			\
				src/parcing_handling/copy_str.c					\
				src/parcing_handling/push_instruction_corewar.c	\
				src/parcing_handling/parse_description.c		\
				src/parcing_handling/only_one_arg.c				\
				src/memory_handling/check_overlap.c				\
				src/memory_handling/load_champ_instruct_in_mem.c	\
				src/memory_handling/load_in_mem.c					\
				src/prg_handling/start_prg.c						\
				src/prg_handling/init_process.c						\
				src/prg_handling/fill_process.c						\
				src/list_handling/move_in_the_list.c				\
				src/prg_handling/check_lives.c						\
				src/prg_handling/do_cycle.c							\
				src/prg_handling/parse_from_mem.c					\
				src/instruct_handling/is_instruct_valid_vm.c		\
				src/prg_handling/get_descript_from_mem.c			\
				src/prg_handling/instruction_is_valid.c				\
				src/prg_handling/parse_arg_from_mem.c				\
				src/prg_handling/use_index.c						\
				src/prg_handling/get_arg_from_mem.c					\
				src/prg_handling/register_handling.c				\
				src/prg_handling/dump_memory.c						\
				src/utils/int_to_hexa.c								\
				src/instruct_handling/get_value_from_instruct.c		\
				src/instruct_handling/get_nb_from_mem.c				\
				src/instruct_handling/ld.c							\
				src/instruct_handling/live.c						\
				src/instruct_handling/store_at_index.c				\
				src/instruct_handling/add.c							\
				src/instruct_handling/sub.c							\
				src/instruct_handling/zjmp.c						\
				src/instruct_handling/ldi.c							\
				src/instruct_handling/sti.c							\
				src/instruct_handling/fork_for_vm.c					\
				src/instruct_handling/lld.c							\
				src/instruct_handling/lldi.c						\
				src/instruct_handling/lfork.c						\
				src/instruct_handling/aff.c							\
				src/utils/op.c										\
				src/prg_handling/init_functions.c					\
				src/instruct_handling/st.c							\
				src/prg_handling/display_the_winner.c				\
				src/prg_handling/destroy_processes.c				\
				src/prg_handling/destroy_instructions.c				\
				src/champ_handling/destroy_champ.c					\
				src/utils/my_putstr.c

CRIT_SRC	=	src/list_handling/create_list.c				\
				src/list_handling/add_to_list.c				\
				src/list_handling/destroy_list.c			\
				src/arg_handling/argument_handling.c		\
				src/arg_handling/argument_error_handling.c	\
				src/utils/end_of_file.c						\
				src/utils/my_strlen.c						\
				src/utils/my_strcmp.c						\
				src/utils/is_num.c								\
				src/parcing_handling/parse_header.c				\
				src/parcing_handling/parse_instructions.c		\
				src/parcing_handling/parse_args.c				\
				src/utils/my_get_nbr.c							\
				src/champ_handling/create_champion.c			\
				src/list_handling/get_list_len.c				\
				src/arg_handling/is_option_valid.c				\
				src/arg_handling/check_arguments.c				\
				src/arg_handling/check_champion_nb_error.c		\
				src/arg_handling/add_champ_from_arg.c			\
				src/champ_handling/champion_dup.c				\
				src/champ_handling/push_champion.c				\
				src/champ_handling/get_champion_info.c			\
				src/parcing_handling/fill_arg.c					\
				src/parcing_handling/reverse_bytes.c			\
				src/parcing_handling/copy_str.c					\
				src/parcing_handling/push_instruction_corewar.c	\
				src/parcing_handling/parse_description.c		\
				src/parcing_handling/only_one_arg.c				\
				src/memory_handling/check_overlap.c				\
				src/memory_handling/load_champ_instruct_in_mem.c	\
				src/memory_handling/load_in_mem.c					\
				src/prg_handling/start_prg.c						\
				src/prg_handling/init_process.c						\
				src/prg_handling/fill_process.c						\
				src/list_handling/move_in_the_list.c				\
				src/prg_handling/check_lives.c						\
				src/prg_handling/do_cycle.c							\
				src/prg_handling/parse_from_mem.c					\
				src/instruct_handling/is_instruct_valid_vm.c		\
				src/prg_handling/get_descript_from_mem.c			\
				src/prg_handling/instruction_is_valid.c				\
				src/prg_handling/parse_arg_from_mem.c				\
				src/prg_handling/use_index.c						\
				src/prg_handling/get_arg_from_mem.c					\
				src/prg_handling/register_handling.c				\
				src/prg_handling/dump_memory.c						\
				src/utils/int_to_hexa.c								\
				src/instruct_handling/get_value_from_instruct.c		\
				src/instruct_handling/get_nb_from_mem.c				\
				src/instruct_handling/ld.c							\
				src/instruct_handling/live.c						\
				src/instruct_handling/store_at_index.c				\
				src/instruct_handling/add.c							\
				src/instruct_handling/sub.c							\
				src/instruct_handling/zjmp.c						\
				src/instruct_handling/ldi.c							\
				src/instruct_handling/sti.c							\
				src/instruct_handling/fork_for_vm.c					\
				src/instruct_handling/lld.c							\
				src/instruct_handling/lldi.c						\
				src/instruct_handling/lfork.c						\
				src/instruct_handling/aff.c							\
				src/utils/op.c										\
				src/prg_handling/init_functions.c					\
				src/instruct_handling/st.c							\
				src/prg_handling/display_the_winner.c				\
				src/prg_handling/destroy_processes.c				\
				src/prg_handling/destroy_instructions.c				\
				src/champ_handling/destroy_champ.c					\
				src/utils/my_putstr.c

TEST_STRLEN	=	tests/test_my_strlen.c
TEST_STRCMP	=	tests/test_my_strcmp.c

OBJ		=	$(SRC:.c=.o)
OBJS	=	$(CRIT_SRC:.c=.o)

CFLAGS		+=	-Wall -Wextra -I include -Ofast
CRITFLAGS	=	--coverage -lcriterion --verbose

LDFLAGS	+=	-lm

NAME	=	corewar

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/ re
		make -C lib/ clean
		gcc -o $(NAME) $(CFLAGS) $(OBJ) $(LDFLAGS) -L./ -lmy

test_strlen:	$(OBJS)
		gcc $(OBJS) $(TEST_STRLEN) -o test_strlen $(CRITFLAGS)

test_strcmp:	$(OBJS)
		gcc $(OBJS) $(TEST_STRCMP) -o test_strcmp $(CRITFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		make -C lib/ fclean

tclean:		fclean
		rm -f test_strlen test_strcmp
		mv *.gc* trace/

re:		fclean all

.PHONY:		all clean fclean re