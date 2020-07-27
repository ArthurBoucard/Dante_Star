/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include "solv.h"

void solver(struct s_val *val)
{
    for (; val->maze[val->y - 1][val->x - 1] != 'o';) {
        if (test_all_path(val) == 0)
            back_track(val);
        movement(val);
    }
    return;
}

int main(int ac, char **av)
{
    struct s_val *val = malloc(sizeof(struct s_val));

    if (ac != 2)
        return 84;
    verif_file(av[1]);
    init_all(val, av[1]);
    if (val->maze[0][0] == 'X') {
        my_printf("no solution found");
        return 84;
    }
    solver(val);
    clean(val);
    for (int i = 0; i < val->y - 1; my_printf("%s\n", val->maze[i]), i++);
    my_printf("%s", val->maze[val->y - 1]);
    return 0;
}