##
## EPITECH PROJECT, 2021
## B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
## File description:
## valgrind_checker
##

#!/bin/bash

make
cd asm/
valgrind ./asm 2> vg_output
grep "ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)" vg_output
if [ $? -ne 0 ]
then
    echo -e "\e[31mMEMORY ERROR\e[39m"
    cat vg_output
    exit 1
fi
grep "All heap blocks were freed -- no leaks are possible" vg_output
if [ $? -ne 0 ]
then
    echo -e "\e[31mALL BLOCK WHERE NOT FREED\e[39m"
    cat vg_output
    exit 1
fi