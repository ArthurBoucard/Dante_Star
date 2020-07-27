/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** path_wall_gen
*/

#include "gen.h"

void wall2(struct s_val *val, int way)
{
    if (val->j != val->y - 1 && way != 2 &&
        (val->maze[val->j + 1][val->i] == '*')) {
        val->maze[val->j + 1][val->i] = 'X';
        return;
    }
    if (val->i != 0 && way != 3 &&
        (val->maze[val->j][val->i - 1] == '*')) {
        val->maze[val->j][val->i - 1] = 'X';
        return;
    }
}

void wall(struct s_val *val, int way)
{
    if (val->nb_path == 1)
        return;
    if (val->j != 0 && way != 0 && (val->maze[val->j - 1][val->i] == '*')) {
        val->maze[val->j - 1][val->i] = 'X';
        return;
    }
    if (val->i != val->x - 1 && way != 1 &&
        (val->maze[val->j][val->i + 1] == '*')) {
        val->maze[val->j][val->i + 1] = 'X';
        return;
    }
    wall2(val, way);
}