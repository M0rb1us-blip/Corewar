/*
** EPITECH PROJECT, 2020
** Pool
** File description:
** my_strncmp
*/

static int check(char const *s1, char const *s2, int i)
{
    if (s1[i] < s2[i])
        return (-1);
    if (s1[i] > s2[i])
        return (1);
    return (0);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    if (check(s1, s2, i) != 0)
        return (check(s1, s2, i));
    for (; i < n; i++) {
        if (check(s1, s2, i) != 0)
            return (check(s1, s2, i));
    }
    return (0);
}