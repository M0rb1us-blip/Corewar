/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** displays a str
*/

void my_putchar(char c);

void my_fputchar(int fd, char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}

int my_fputstr(int fd, char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_fputchar(fd, str[i]);
    return (0);
}
