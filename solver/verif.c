/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** verif
*/

#include "solv.h"

int exist(char *fd)
{
    int file;

    file = open(fd, O_RDONLY);
    if (file == -1)
        exit(84);
    close(file);
    return 0;
}

int verif_file(char *file)
{
    int fd;
    char buff[1];
    int len = 0;
    char *maze;

    exist(file);
    fd = open(file, O_RDONLY);
    for (int test = 1; test != 0; len++)
        test = read(fd, buff, 1);
    close(fd);
    maze = malloc(sizeof(char) * len);
    fd = open(file, O_RDONLY);
    read(fd, maze, len);
    for (int i = 0; i < len - 1; i++)
        if (maze[i] != 'X' && maze[i] != '*' && maze[i] != '\n')
            exit(84);
    close(fd);
    return 0;
}