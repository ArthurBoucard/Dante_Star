/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** count_path
*/

#include "gen.h"

void count_poss_path(struct s_val *val)
{
    if (val->j != 0 && (val->maze[val->j - 1][val->i] == '*'))
        val->nb_path++;
    if (val->i != val->x - 1 && (val->maze[val->j][val->i + 1] == '*'))
        val->nb_path++;
    if (val->j != val->y - 1 && (val->maze[val->j + 1][val->i] == '*'))
        val->nb_path++;
    if (val->i != 0 && (val->maze[val->j][val->i - 1] == '*'))
        val->nb_path++;
}

int count_path(struct s_val *val)
{
    val->nb_path = 0;
    count_poss_path(val);
    if (val->nb_path >= 3) {
        val->intersec[val->nb_intersec][0] = val->j;
        val->intersec[val->nb_intersec][1] = val->i;
        val->nb_intersec++;
    }
    if (val->nb_path == 0) {
        back_track(val);
        return 1;
    } else {
        val->path = rand() % val->nb_path;
        return 0;
    }
}