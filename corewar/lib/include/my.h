/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my_printf
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);
int my_strlen(char const *str);
char *my_strcat(char *dest, char *src);
int my_printf(char *format, ...);
int search_flags(char format, char *tableau_flags);
void print_bad_flags(char *format, int i);
void put_hashtag(char format);
void modulo_c(va_list *flags);
void modulo_s(va_list *flags);
void modulo_int(va_list *flags);
void modulo_o(va_list *flags);
void modulo_x(va_list *flags);
void modulo_x_uppercase(va_list *flags);
void modulo_u(va_list *flags);
void modulo_p(va_list *flags);
void modulo_percent(va_list *flags);
void modulo_b(va_list *flags);
void modulo_s_uppercase(va_list *flags);
int my_atoi(char *c);
int my_getnbr(char const *str);
int my_strncmp(char const *s1, char const *s2, int n);
int my_fputstr(int fd, char const *str);
void my_fputchar(int fd, char c);

#endif
