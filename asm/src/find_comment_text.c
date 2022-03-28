/*
** EPITECH PROJECT, 2021
** asm
** File description:
** fin_comment_text
*/

#include "../include/nomdestruct.h"

char *take_comment(char **text, int i, int j)
{
    int x = 0;
    int count = count_char(text, i, j);
    char *comment = malloc(sizeof(char) * count + 1);

    if (j != 0 && text[i][j - 1] != '"') {
        for (; text[i][j] != '"' && text[i][j] != '\0'; j++);
        if (text[i][j] != '\0')
            j++;
    }
    for (; text[i][j] != '"' && text[i][j] != '\0'; j++, x++)
        comment[x] = text[i][j];
    comment[x] = '\0';
    if (my_strlen(comment) > COMMENT_LENGTH)
        exit(84);
    return (comment);
}

int verify_comment(char **text, int i, int j)
{
    int check = 0;

    if (text[i][j] == '.') {
        if (text[i][j + 1] == 'c' && text[i] [j + 2] == 'o')
            check++;
        if (text[i][j + 3] == 'm' && text[i][j + 4] == 'm' && \
            text[i][j + 5] == 'e')
            check++;
        if (text[i][j + 6] == 'n' && text[i][j + 7] == 't')
            check++;
        if (check == 3)
            return (1);
        return (0);
    }
    else
        return (0);
}

char *find_comment_text(map_t *map)
{
    int i = 0;
    int check = 0;
    int j = 0;
    char *comment;

    for (; map->file[i] != NULL && check == 0; i++) {
        for (j = 0; map->file[i][j] != '\0' && check == 0; j++)
            check = verify_comment(map->file, i, j);
    }
    if (check != 0) {
        comment = take_comment(map->file, i - 1, j);
        return (comment);
    }
    else
        return NULL;
}