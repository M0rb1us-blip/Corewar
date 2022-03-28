/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "../lib/include/my.h"
#include "op.h"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// #include <criterion/criterion.h>
// #include <criterion/redirect.h>

#define EXIT_FAIL 84

typedef struct champion champion_t;
typedef struct proc proc_t;
typedef struct list_t list_t;
typedef struct fct fct_t;
typedef struct color color_t;

extern int nb_live;
extern int cycle_to_die;
extern int nb_cycles;

enum INSTRUCTION_CODES {
    _live = 1,
    _ld,
    _st,
    _add,
    _sub,
    _and,
    _or,
    _xor,
    _zjmp,
    _ldi,
    _sti,
    _fork,
    _lld,
    _lldi,
    _lfork,
    _aff
};

typedef struct instruction_s {
    char code;
    char *description;
    int *args;
    char *label;
    char **label_args;
    int size;
    int cumulative_size;
} instruction_t;

struct color {
    int r;
    int g;
    int b;
    int a;
};

struct fct {
    bool (*fct)(proc_t ***, int);
    int code;
};

struct proc {
    bool is_active;
    int cycles;
    instruction_t *instruction;
    champion_t *champion;
    list_t *pc;
    int carry;
    int *registers;
};

struct champion {
    char *instructions;
    int start_offset;
    header_t *header;
    int last_live;
    bool dead;
    int prog_number;
    color_t color;
};

struct list_t
{
    char val;
    int owner;
    struct list_t *prev;
    struct list_t *next;
};

bool check_lives(champion_t **champions, proc_t **procs);
int *parse_args(char **file, int *size, char *description);
bool parse_instructions(char *file, int size);
champion_t *create_champion(char *path, int n, int a);
bool parse_instruction_from_mem(proc_t *proc);
char *parse_description(char c);
bool instruction_is_valid_corewar(instruction_t *instruction);
bool uses_indexes_corewar(int code);
bool is_instruction_code_valid_corewar(char code);
void dump_memory(list_t *mem);
int get_nb_from_mem(list_t *mem, int size, int offset);
proc_t **push_proc(proc_t **arr, proc_t *add);
bool argument_error_handling(int ac, char **av);
bool end_of_file_corewar(char *path, char *end);
bool argument_handling(int ac, char **av, champion_t ***champions, int *);
void destroy_processes(proc_t **procs);
void destroy_champions(champion_t **champions);
void destroy_instruction(instruction_t *instruction);

void add_next(list_t *list, int val);
void add_prev(list_t *list, int val);
void add_n_next(list_t *list, int nb, int val);
void add_n_prev(list_t *list, int nb, int val);
list_t *create_list(void);
void clear_list(list_t *list);
void delete_in_list(list_t *list);
list_t *go_next(list_t *list);
list_t *go_n_next(list_t *list, int nb);
list_t *go_prev(list_t *list);
list_t *go_n_prev(list_t *list, int nb);

bool add(proc_t ***procs, int i);
bool aff(proc_t ***procs, int i);
bool and(proc_t ***procs, int i);
bool fork_vm(proc_t ***procs, int i);
bool ld(proc_t ***procs, int i);
bool ldi(proc_t ***procs, int i);
bool lfork(proc_t ***procs, int i);
bool live(proc_t ***procs, int i);
bool lld(proc_t ***procs, int i);
bool lldi(proc_t ***procs, int i);
bool or(proc_t ***procs, int i);
bool st(proc_t ***procs, int i);
bool sti(proc_t ***procs, int i);
bool sub(proc_t ***procs, int i);
bool xor(proc_t ***procs, int i);
bool zjmp(proc_t ***procs, int i);
int get_value_from_instrution(proc_t *proc, int arg);
proc_t *create_new_proc(proc_t *proc);
void store_at_index_two(list_t *pc, int value, int index, int);
void store_at_index_int(list_t *pc, int value, int index, int);
bool registers_are_valid(instruction_t *instruction);


int my_strlen(char const *str);
bool my_strcmp(char const *str, char const *str2);
bool is_num(char const *str);
int my_get_nbr(char const *str);

int get_list_len(list_t *list);
bool is_option_valid(char **av, bool *expected, int *i);
int check_arguments(char **av, int i, int *buff);
bool check_champion_nb_error(champion_t ***champions);
bool add_champ_from_argument(char *path, int *n, int *a, champion_t ***champs);
champion_t *champion_dup(champion_t *dup);
champion_t **push_champion(champion_t **arr, champion_t *add);
header_t *get_champion_info(char *file_path, char **file_content);
int *fill_arg(char **file, int *size, char *description, int *args);
int reverse_bytes(unsigned int x);
int reverse_bytes_two(unsigned int x);
char *copy_str(char *str, int size);
instruction_t **push_instruction_corewar(instruction_t **arr,
instruction_t *add);
char *parse_description(char c);
bool only_one_arg(int code);
bool check_overlap(list_t *mem, int offset, int size);
bool load_champ_instruct_in_mem(champion_t **champ, list_t *mem);
void load_in_mem(list_t *mem, char *to_write, int size, champion_t *champion);
bool start_prg(champion_t **champions, list_t *memory, int dump);
proc_t **init_process(champion_t **champions, list_t *memory);
proc_t **fill_process(proc_t **procs, list_t *memory, \
champion_t **champions, int i);
fct_t *init_functions(void);

bool live(proc_t ***process, int i);
bool do_cycle(proc_t ***procs, fct_t *fcts);
bool parse_from_mem(proc_t *proc);
bool is_instruct_valid_vm(char code);
bool get_descript_from_mem(proc_t *proc);

bool instruction_is_valid(instruction_t *instruction);
void parse_arg_from_mem(proc_t *proc);
bool use_index(int code);
int get_arg_from_mem(proc_t *proc, int size);
bool register_handling(instruction_t *instruction);
void int_to_hexa(int nb, char *str, int size, bool null);
int get_value_from_instruct(proc_t *proc, int arg);
int get_nb_from_mem(list_t *mem, int size, int offset);
void store_at_index(list_t *pc, int value, int index, int prog_nb);

void display_the_winner(champion_t **champions);
void destroy_processes(proc_t **procs);
void destroy_instruction(instruction_t *instruction);
void destroy_champ(champion_t **champions);
int my_putstr(char const *str);

int my_printf(char *format, ...);

#endif /* !STRUCT_H_ */