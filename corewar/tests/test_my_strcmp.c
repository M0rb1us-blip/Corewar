/*
** EPITECH PROJECT, 2true21
** B-CPE-2true1-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-2true.true4]
** File description:
** test_my_strcmp
*/

#include "../include/struct.h"

Test(my_strcmp, number1)
{
    char *str = "12345";
    char *str2 = "12345";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, number2)
{
    char *str = "123456789";
    char *str2 = "123456789";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, number3)
{
    char *str = "123456789true12";
    char *str2 = "123456789true12";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, number4)
{
    char *str = "1";
    char *str2 = "1";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, number5)
{
    char *str = "125";
    char *str2 = "125";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, number6)
{
    char *str = "125";
    char *str2 = "1525";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, number7)
{
    char *str = "15";
    char *str2 = "125";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, number8)
{
    char *str = "5";
    char *str2 = "125";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, number9)
{
    char *str = "14564465true625";
    char *str2 = "124544544445";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, number1true)
{
    char *str = "1254545545452452";
    char *str2 = "1245445";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, letter1)
{
    char *str = "gdfdgdf";
    char *str2 = "gdfdgdf";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, letter2)
{
    char *str = "fd";
    char *str2 = "fd";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, letter3)
{
    char *str = "a";
    char *str2 = "a";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, letter4)
{
    char *str = "fdsfsdgsgfsggfdgdfzctz";
    char *str2 = "fdsfsdgsgfsggfdgdfzctz";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, letter5)
{
    char *str = "fdsfdsfds";
    char *str2 = "fdsfdsfds";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, letter6)
{
    char *str = "a";
    char *str2 = "fdsfdsfds";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, letter7)
{
    char *str = "fdsfasfds";
    char *str2 = "fdsfdsfds";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, letter8)
{
    char *str = "eazfddgfdgfdgfd";
    char *str2 = "fdsfdsfsdgdffds";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, letter9)
{
    char *str = "fdsfdsfds";
    char *str2 = "ds";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, letter1true)
{
    char *str = "ds";
    char *str2 = "fdsfdsfds";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, random1)
{
    char *str = "ds5f4fdf";
    char *str2 = "ds5f4fdf";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, random2)
{
    char *str = "ds+5564";
    char *str2 = "5564";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, random3)
{
    char *str = "dsfdgdfgf5 g gf 5+6fg+ +6 +6";
    char *str2 = "dsfdgdfgf5 g gf 5+6fg+ +6 +6";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, random4)
{
    char *str = "d5";
    char *str2 = "d5";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, random5)
{
    char *str = "gdfg5454gf6dg 5g6 d4f 52df6 gd4f 6g 45";
    char *str2 = "gdfg5454gf6dg 5g6 d4f 52df6 gd4f 6g 45";
    cr_expect(my_strcmp(str, str2) == true);
}

Test(my_strcmp, random6)
{
    char *str = "dsgfdg5g6fd5gfd6g";
    char *str2 = "fd5745sfdsfds";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, random7)
{
    char *str = "dgfd4545 54 656 1 61s";
    char *str2 = "fdsgt54 5545  fdsfds";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, random8)
{
    char *str = "ds+*+265 6+25+52 +522+625";
    char *str2 = "fdsfd5 64 56 54 64+*-/ -* /sfds";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, random9)
{
    char *str = "ds+5+2952 +29+59526";
    char *str2 = "fdsfdsfdfdf5+448658645s";
    cr_expect(my_strcmp(str, str2) != true);
}

Test(my_strcmp, random1true)
{
    char *str = "ds";
    char *str2 = "d4";
    cr_expect(my_strcmp(str, str2) != true);
}
