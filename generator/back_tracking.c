/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** back_tracking
*/

#include "gen.h"

void back_track(struct s_val *val)
{
    if (val->intersec[0][0] == -1) {
        clean(val);
        for (int i = 0; i < val->y - 1; my_printf("%s\n", val->maze[i]), i++);
        my_printf("%s", val->maze[val->y - 1]);
        exit(0);
    } else {
        if (val->nb_intersec > 1) {
            val->nb_intersec--;
            val->j = val->intersec[val->nb_intersec][0];
            val->i = val->intersec[val->nb_intersec][1];
            val->intersec[val->nb_intersec][0] = -1;
            val->intersec[val->nb_intersec][1] = -1;
        } else {
            val->nb_intersec--;
            val->intersec[val->nb_intersec][0] = -1;
            val->intersec[val->nb_intersec][1] = -1;
        }
    }
}