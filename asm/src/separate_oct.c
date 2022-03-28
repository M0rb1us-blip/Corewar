/*
** EPITECH PROJECT, 2021
** other
** File description:
** separate_oct
*/
#include "nomdestruct.h"

int sperate_doct_into_int(char *bin, int bool)
{
    char *oct;
    int i = 7;
    int j = 0;
    int cons = 1;
    if (my_strlen(bin) == 17) {
        i = 8;
        cons = 0;
    }
    oct = malloc(sizeof(char) * (i + 2));
    oct[i + 1] = '\0';
    if (bool == 1) {
        for (; j <= i; j++)
            oct[j] = bin[j];
    } else
        for (i++; i <= my_strlen(bin) - cons; i++, j++)
            oct[j] = bin[i];
    i = bin_to_int(oct);
    free(oct);
    return i;
}

int sperate_qoct_into_int(char *bin, int bool)
{
    char *oct;
    int ind = 0;
    int i = 7;
    int cons = 1 * bool;
    if (my_strlen(bin) == 33)
        return sperate_qoct_into_int(bin + 1, bool);
    oct = malloc(sizeof(char) * (i + 2));
    oct[i + 1] = '\0';
    if (bool == 0) {
        for (int j = 0; j <= i; j++)
            oct[j] = bin[j];
    } else
        for (int j = bool * i + cons; j <= i * (bool + 1) + cons; j++, ind++)
            oct[ind] = bin[j];
    i = bin_to_int(oct);
    free(oct);
    return i;
}