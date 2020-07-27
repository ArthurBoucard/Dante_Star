/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** clean
*/

#include "solv.h"

void clean(struct s_val *val)
{
    for (int i = 0, j = 0; i < val->y; i++)
        for (j = 0; j < val->x; j++)
            if (val->maze[j][i] == 'c')
                val->maze[j][i] = '*';
}