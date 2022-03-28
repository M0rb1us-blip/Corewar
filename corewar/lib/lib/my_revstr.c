/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** copy the reverse
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str);

char *my_revstr(char *src)
{
    int i = 0;
    int j;
    char stockage;

    for (j = my_strlen(src) - 1; i < j;) {
        stockage = src[j];
        src[j] = src[i];
        src[i] = stockage;
        i++;
        j--;
    }
    return (src);
}
