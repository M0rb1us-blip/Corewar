##
## EPITECH PROJECT, 2021
## B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
## File description:
## Makefile
##

ASM			=	asm/

COREWAR		= 	corewar/

all:
		make -C $(ASM)
		make -C $(COREWAR)

clean:
		make -C $(ASM) clean
		make -C $(COREWAR) clean

fclean:		clean
		make -C $(ASM) fclean
		make -C $(COREWAR) fclean

re:		fclean all

.PHONY:		all clean fclean re