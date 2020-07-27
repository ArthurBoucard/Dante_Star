/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** test_path
*/

#include "gen.h"

int test_all_path(struct s_val *val)
{
    if (val->j != 0 && (val->maze[val->j - 1][val->i] == '*'))
        return 1;
    if (val->i != val->x - 1 && (val->maze[val->j][val->i + 1] == '*'))
        return 1;
    if (val->j != val->y - 1 && (val->maze[val->j + 1][val->i] == '*'))
        return 1;
    if (val->i != 0 && (val->maze[val->j][val->i - 1] == '*'))
        return 1;
    return 0;
}

int test_path(struct s_val *val, int dir)
{
    if (val->j != 0 && dir == 0 && (val->maze[val->j - 1][val->i] == '*'))
        return 1;
    if (val->i != val->x - 1 && dir == 1 &&
        (val->maze[val->j][val->i + 1] == '*'))
        return 1;
    if (val->j != val->y - 1 && dir == 2 &&
        (val->maze[val->j + 1][val->i] == '*'))
        return 1;
    if (val->i != 0 && dir == 3 && (val->maze[val->j][val->i - 1] == '*'))
        return 1;
    return 0;
}