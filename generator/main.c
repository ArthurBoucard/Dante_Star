/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include "gen.h"

void generate(struct s_val *val)
{
    for (val->i = 0, val->j = 0; val->maze[0][0] != 'c';) {
        if (count_path(val) == 0)
            move(val);
    }
}

void init_val(struct s_val *val, char **av)
{
    val->x = atoi(av[1]);
    val->y = atoi(av[2]);
    val->maze = malloc(sizeof(char *) * val->y);
    for (int i = 0; i < val->y; val->maze[i] = malloc(sizeof(char) *
        val->x + 1), i++);
    for (int i = 0, j = 0; j < val->y; j++) {
        for (i = 0; i < val->x; i++)
            val->maze[j][i] = '*';
        val->maze[j][val->x] = '\0';
    }
    val->intersec = malloc(sizeof(int *) * (val->x * val->y) / 10);
    for (int i = 0; i < (val->x * val->y) / 10; i++)
        val->intersec[i] = malloc(sizeof(int) * 2);
    val->nb_intersec = 0;
}

int main(int ac, char **av)
{
    struct s_val *val = malloc(sizeof(struct s_val));

    if (ac < 3 || ac > 4)
        return 84;
    else if (atoi(av[1]) == 0 && atoi(av[2]) == 0)
        return 84;
    srand(time(NULL));
    init_val(val, av);
    generate(val);
    clean(val);
    for (int i = 0; i < val->y - 1; my_printf("%s\n", val->maze[i]), i++);
    my_printf("%s", val->maze[val->y - 1]);
    return 0;
}