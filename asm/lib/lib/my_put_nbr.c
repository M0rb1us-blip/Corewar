/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int results = 0;

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    results = (nb % 10) +48;
    my_putchar(results);
    return (0);
}
