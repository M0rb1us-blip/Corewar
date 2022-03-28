/*
** EPITECH PROJECT, 2021
** asm
** File description:
** find_name_text
*/

#include "../include/nomdestruct.h"

char *my_strlowcase(char *str)
{
    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] >= 'A' && str[j] <= 'Z')
            str [j] = str[j] + 32;
    }
    return (str);
}

char *take_name(char **text, int i, int j)
{
    int x = 0;
    int count = count_char(text, i, j);
    char *name = malloc(sizeof(char) * count + 1);

    if (j != 0 && text[i][j - 1] != '"') {
        for (; text[i][j] != '"' && text[i][j] != '\0'; j++);
        if (text[i][j] != '\0')
            j++;
    }
    for (; text[i][j] != '"' && text[i][j] != '\0'; j++, x++)
        name[x] = text[i][j];
    name[x] = '\0';
    if (my_strlen(name) > PROG_NAME_LENGTH)
        exit(84);
    return (name);
}

int verify_name(char **text, int i, int j)
{
    int check = 0;

    if (text[i][j] == '.') {
        if (text[i][j + 1] == 'n')
            check++;
        if (text[i][j + 2] == 'a' && text[i][j + 3] == 'm')
            check++;
        if (text[i][j + 4] == 'e')
            check++;
        if (check == 3)
            return (1);
        else
            return (0);
    }
    else
        return (0);
}

char *find_name_text(map_t *map)
{
    int i = 0;
    int check = 0;
    int j = 0;
    char *name;
    for (; map->file[i] != NULL && check == 0; i++) {
        for (j = 0; map->file[i][j] != '\0' && check == 0; j++)
            check = verify_name(map->file, i, j);
    }
    if (check != 0) {
        name = take_name(map->file, i - 1, j);
        return (name);
    }
    else
        return NULL;
}