/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** init_functions
*/

#include "../../include/struct.h"

fct_t *avoid_norm_error(fct_t *functions)
{
    functions[9] = (fct_t) {ldi, _ldi};
    functions[10] = (fct_t) {sti, _sti};
    functions[11] = (fct_t) {fork_vm, _fork};
    functions[12] = (fct_t) {lld, _lld};
    functions[13] = (fct_t) {lldi, _lldi};
    functions[14] = (fct_t) {lfork, _lfork};
    functions[15] = (fct_t) {aff, _aff};
    functions[16] = (fct_t) {0};
    return (functions);
}

fct_t *init_functions(void)
{
    fct_t *functions = malloc(sizeof(fct_t) * 17);

    if (functions == NULL)
        return (NULL);
    functions[0] = (fct_t) {live, _live};
    functions[1] = (fct_t) {ld, _ld};
    functions[2] = (fct_t) {st, _st};
    functions[3] = (fct_t) {add, _add};
    functions[4] = (fct_t) {sub, _sub};
    functions[5] = (fct_t) {and, _and};
    functions[6] = (fct_t) {or, _or};
    functions[7] = (fct_t) {xor, _xor};
    functions[8] = (fct_t) {zjmp, _zjmp};
    functions = avoid_norm_error(functions);
    return (functions);
}