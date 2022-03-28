##
## EPITECH PROJECT, 2021
## B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
## File description:
## strcmp_checker
##

cd corewar/
make test_strcmp

./test_strcmp > my_strcmp_output

if [ $? -ne 0 ]
then
    echo -e "\e[31mCRITERION ERROR\e[39m"
    echo -e "\e[31mFUNCTION: my_strcmp\e[39m"
    cat my_strcmp_output
    exit 1
fi