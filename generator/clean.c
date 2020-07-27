/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** clean
*/

#include "gen.h"

void clean(struct s_val *val)
{
    for (int j = 0, i = 0; j < val->y; j++)
        for (i = 0; i < val->x; i++)
            if (val->maze[j][i] == 'v' || val->maze[j][i] == 'c')
                val->maze[j][i] = '*';
    val->maze[val->y - 1][val->x - 1] = '*';
}