/*
** EPITECH PROJECT, 2019
** my
** File description:
** my.h
*/

#include "../lib/my/lib.h"

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_val {
    int x;
    int y;
    int i;
    int j;
    int nb_path;
    char **maze;
    char *path_taken;
    int nb_path_taken;
} t_val;

int verif_file(char *file);

void init_all(struct s_val *val, char *file);

int test_all_path(struct s_val *val);

void movement(struct s_val *val);

void back_track(struct s_val *val);

void clean(struct s_val *val);