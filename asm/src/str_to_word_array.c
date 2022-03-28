/*
** EPITECH PROJECT, 2020
** prog_en_cours
** File description:
** str_to_word_array
*/

#include "nomdestruct.h"

static char *malloc_str(char *str)
{
    char *string;
    int i = 0;

    for (; str[i] != '\n' && str[i] != '\t' && str[i] != '\0'; i++);
    string = my_malloc(sizeof(char) * (i + 1));
    for (int j = 0; j < i; j++)
        string[j] = 0;
    string[i] = '\0';
    return (string);
}

static int nb_words(char *str)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i] == '\t')
            j++;
    }
    return (j + 1);
}

char **my_str_to_array(char *str)
{
    int nbw = nb_words(str);
    char **array = my_malloc(sizeof(char *) * (nbw + 1));
    int i = 0;
    int j = 0;
    int k = 0;
    for (; j < nbw; j++){
        array[j] = malloc_str(str + i);
        for (k = 0; str[i] != '\0' && str[i] != '\n' && \
            str[i] != '\t'; i++, k++)
            array[j][k] = str[i];
        array[j][k] = '\0';
        i++;
    }
    array[j - 1][k] = '\0';
    array[j] = NULL;
    return (array);
}