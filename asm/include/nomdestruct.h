/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** nomdestruct
*/

#ifndef NOMDESTRUCT_H_
#define NOMDESTRUCT_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include "../lib/include/my.h"
#include "list.h"
#include "op.h"

typedef struct map_s
{
    int fd;
    int rows;
    int cols;
    char **file;
    char *buffer;
    char *corname;
    char *name;
    char *comment;
} map_t;

char **load_2d_array_from_file(char *filepath, map_t *map);
char **malloc_2d_array(char **map, int rows, int cols);
char **fill_2d_array(char **str, char *temp);
char **my_str_to_array(char *str);
void *my_malloc(size_t len);
void parsing_args(char **file, map_t *map);
void parsing_args_sub(char *file, list_t *list, char *inst);
int find_tocom(char *file);
void add_in_arg(char *inst, list_arg_t *arg, list_t *list);
char *malloc_inst(char *file, int i);
char *find_type(char *str);
int is_instruction(char *str);
int avoid_too_much_line(int tocom, int *i, char *file, char *inst);
int check_com_or_dots(char **file);
int count_char(char **text, int i, int j);
void free_ar(char **array);
char *take_comment(char **text, int i, int j);
char *take_name(char **text, int i, int j);
char *find_comment_text(map_t *map);
char *find_name_text(map_t *map);
void do_bytes(list_t *list);
void special_instruction(list_t *list);
void instruction_check_byte(list_t *list);
void put_byte_in_list(list_t *list, int byte);
char *int_to_bin_o(int nb);
char *int_to_bin_do(int nb);
char *int_to_bin_qo(int nb);
int bin_to_int(char *bin);
int sperate_doct_into_int(char *bin, int bool);
int sperate_qoct_into_int(char *bin, int bool);
char *fill_bincb(void);
char *parse_for_codingbyte(list_t *list, char *bin_cb, int *i);
void bytes_pos_and_codingbyte(list_t *list);
void pos_byte(list_t *list);
void write_bytes_with_separate(int bytes, int val, int fd);
int check_wich_instruction(char *str);
int write_else(list_arg_t arg, list_t *list2, int last_inst_pos);
int what_to_print_label(list_t *list, int fd);
int get_wich_label(list_t *list, char *label);
void as_coding_bytes_print(list_arg_t arg, int fd);
void print_header(map_t *map, list_t *list, int fd);
int get_prog_len(list_t *list);
void create_file(char *name, map_t *map, list_t list);
int check_maj(list_t *list);
int check_maj_sub(char *inst);
char *my_strlowcase(char *str);


#endif /* !NOMDESTRUCT_H_ */