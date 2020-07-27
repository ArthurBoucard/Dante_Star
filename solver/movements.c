/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** movements
*/

#include "solv.h"

void movement3(struct s_val *val)
{
    if (val->i != 0) {
        if (val->maze[val->j][val->i - 1] == '*') {
            val->maze[val->j][val->i] = 'o';
            val->i--;
            val->path_taken[val->nb_path_taken] = '3';
            val->path_taken[val->nb_path_taken + 1] = '\0';
            val->nb_path_taken++;
            return;
        }
    }
    if (val->j != 0) {
        if (val->maze[val->j - 1][val->i] == '*') {
            val->maze[val->j][val->i] = 'o';
            val->j--;
            val->path_taken[val->nb_path_taken] = '0';
            val->path_taken[val->nb_path_taken + 1] = '\0';
            val->nb_path_taken++;
            return;
        }
    }
}

void movement2(struct s_val *val)
{
    if (val->j != val->y - 1) {
        if (val->maze[val->j + 1][val->i] == '*') {
            val->maze[val->j][val->i] = 'o';
            val->j++;
            val->path_taken[val->nb_path_taken] = '2';
            val->path_taken[val->nb_path_taken + 1] = '\0';
            val->nb_path_taken++;
            return;
        }
    }
    movement3(val);
}

void movement(struct s_val *val)
{
    if (val->i != val->x - 1) {
        if (val->maze[val->j][val->i + 1] == '*') {
            val->maze[val->j][val->i] = 'o';
            val->i++;
            val->path_taken[val->nb_path_taken] = '1';
            val->path_taken[val->nb_path_taken + 1] = '\0';
            val->nb_path_taken++;
            return;
        }
    }
    movement2(val);
}