/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** test_path
*/

#include "solv.h"

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