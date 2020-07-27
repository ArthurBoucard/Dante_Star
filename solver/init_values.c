/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** init_values
*/

#include "solv.h"

void init_x(struct s_val *val , char *file)
{
    int fd;
    char buff[1];

    val->x = -1;
    fd = open(file, O_RDONLY);
    buff[0] = 'a';
    for (int test = 1; buff[0] != '\n'; val->x++)
        test = read(fd, buff, 1);
    close(fd);
}

void init_y(struct s_val *val , char *file)
{
    int fd;
    char buff[1];

    val->y = 1;
    fd = open(file, O_RDONLY);
    buff[0] = 'a';
    for (int test = 1; test != 0;) {
        if (buff[0] == '\n')
            val->y++;
        test = read(fd, buff, 1);
    }
    close(fd);
}

void init_all(struct s_val *val, char *file)
{
    int fd;

    init_x(val, file);
    init_y(val, file);
    val->maze = malloc(sizeof(char *) * val->y);
    for (int i = 0; i < val->y; val->maze[i] = malloc(sizeof(char) *
        val->x + 1), i++);
    fd = open(file, O_RDONLY);
    for (int k = 0; k < val->y; k++) {
        read(fd, val->maze[k], val->x + 1);
        val->maze[k][val->x] = '\0';
    }
    close(fd);
    val->i = 0;
    val->j = 0;
    val->path_taken = malloc(sizeof(char) * (val->x * val->y));
    val->path_taken[0] = '\0';
    val->nb_path_taken = 0;
}