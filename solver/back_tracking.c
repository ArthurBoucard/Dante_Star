/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** back_tracking
*/

#include "solv.h"

int setup_path_taken(struct s_val *val)
{
    char *last_char = malloc(sizeof(char) * 2);
    int nb;

    if (val->path_taken[0] == '\0') {
        clean(val);
        my_printf("no solution found");
        exit(84);
    } else {
        nb = val->path_taken[my_strlen(val->path_taken) - 1] - 48;
        val->path_taken[my_strlen(val->path_taken) - 1] = '\0';
        val->nb_path_taken--;
        return nb;
    }
}

void back_track(struct s_val *val)
{
    int pos = setup_path_taken(val);

    if (pos == 0) {
        val->maze[val->j][val->i] = 'c';
        val->j++;
    } else if (pos == 1) {
        val->maze[val->j][val->i] = 'c';
        val->i--;
    }
    if (pos == 2) {
        val->maze[val->j][val->i] = 'c';
        val->j--;
    } else if (pos == 3) {
        val->maze[val->j][val->i] = 'c';
        val->i++;
    }
}