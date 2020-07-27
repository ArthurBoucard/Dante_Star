/*
** EPITECH PROJECT, 2019
** my
** File description:
** my.h
*/

#include "../lib/my/lib.h"

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct s_val {
    int y;
    int x;
    int i;
    int j;
    int path;
    int nb_path;
    char **maze;
    int **intersec;
    int nb_intersec;
} t_val;

int count_path(struct s_val *val);

void move(struct s_val *val);

void wall(struct s_val *val, int way);

int test_path(struct s_val *val, int dir);

int test_all_path(struct s_val *val);

void back_track(struct s_val *val);

void clean(struct s_val *val);