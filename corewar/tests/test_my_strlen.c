/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** test_my_strlen
*/

#include "../include/struct.h"

Test(my_strlen, number1)
{
    char *str = "1234455465";
    cr_expect(my_strlen(str) == 10);
}

Test(my_strlen, number2)
{
    char *str = "12345";
    cr_expect(my_strlen(str) == 5);
}

Test(my_strlen, number3)
{
    char *str = "18896552555545288254545445454454";
    cr_expect(my_strlen(str) == 32);
}

Test(my_strlen, number4)
{
    char *str = "1";
    cr_expect(my_strlen(str) == 1);
}

Test(my_strlen, number5)
{
    char *str = "1485";
    cr_expect(my_strlen(str) == 4);
}

Test(my_strlen, number6)
{
    char *str = "4655818";
    cr_expect(my_strlen(str) == 7);
}

Test(my_strlen, number7)
{
    char *str = "1234567890";
    cr_expect(my_strlen(str) == 10);
}

Test(my_strlen, number8)
{
    char *str = "";
    cr_expect(my_strlen(str) == 0);
}

Test(my_strlen, number9)
{
    char *str = "12";
    cr_expect(my_strlen(str) == 2);
}

Test(my_strlen, number10)
{
    char *str = "12345678901";
    cr_expect(my_strlen(str) == 11);
}

Test(my_strlen, letter1)
{
    char *str = "azert";
    cr_expect(my_strlen(str) == 5);
}

Test(my_strlen, letter2)
{
    char *str = "azezazefdsfds";
    cr_expect(my_strlen(str) == 13);
}

Test(my_strlen, letter3)
{
    char *str = "ldfdfd";
    cr_expect(my_strlen(str) == 6);
}

Test(my_strlen, letter4)
{
    char *str = "l";
    cr_expect(my_strlen(str) == 1);
}

Test(my_strlen, letter5)
{
    char *str = "";
    cr_expect(my_strlen(str) == 0);
}

Test(my_strlen, letter6)
{
    char *str = "aeae";
    cr_expect(my_strlen(str) == 4);
}

Test(my_strlen, letter7)
{
    char *str = "fdfdfgfdgfdgdfgfdgfdgdfgfd";
    cr_expect(my_strlen(str) == 26);
}

Test(my_strlen, letter8)
{
    char *str = "fsdkfkdfkdkfkdkfkdkf";
    cr_expect(my_strlen(str) == 20);
}

Test(my_strlen, letter9)
{
    char *str = "kdkskdkskdk";
    cr_expect(my_strlen(str) == 11);
}

Test(my_strlen, letter10)
{
    char *str = "kkfdkfk";
    cr_expect(my_strlen(str) == 7);
}

Test(my_strlen, random1)
{
    char *str = "fdfdsf f45445fdfd fdfd";
    cr_expect(my_strlen(str) == 22);
}

Test(my_strlen, random2)
{
    char *str = "fdgfdg5    fd5fd5 5fd5f 55fd 5fd";
    cr_expect(my_strlen(str) == 32);
}

Test(my_strlen, random3)
{
    char *str = "f4 45fd4 45 fd54 54fd45 45 45df +-85^ fdfdf";
    cr_expect(my_strlen(str) == 43);
}

Test(my_strlen, random4)
{
    char *str = "1fdf23fdf45";
    cr_expect(my_strlen(str) == 11);
}

Test(my_strlen, random5)
{
    char *str = "f  d  f4 d s 2  4ds3f3dsf";
    cr_expect(my_strlen(str) == 25);
}

Test(my_strlen, random6)
{
    char *str = "123fddsgdgdfgqe45";
    cr_expect(my_strlen(str) == 17);
}

Test(my_strlen, random7)
{
    char *str = "ù^fsdfdsfgsdfdg%+*/fds";
    cr_expect(my_strlen(str) == 23);
}

Test(my_strlen, random8)
{
    char *str = "1a";
    cr_expect(my_strlen(str) == 2);
}

Test(my_strlen, random9)
{
    char *str = "fdfdg45";
    cr_expect(my_strlen(str) == 7);
}

Test(my_strlen, random10)
{
    char *str = "+";
    cr_expect(my_strlen(str) == 1);
}