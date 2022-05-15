/*
** EPITECH PROJECT, 2022
** error handler
** File description:
** error handler
*/

#include "my.h"
#include "sokoban.h"
#include <stddef.h>

static int check_map(char *map)
{
    int count_o = 0;
    int count_x = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'O')
            count_o += 1;
        if (map[i] == 'X')
            count_x += 1;
    }
    if (count_o != count_x) {
        my_printf("Map must have same amount of obstacles and holes\n");
        return 84;
    }
    if (count_o == 0 && count_x == 0) {
        my_printf("Map should have obstacle and holes\n");
        return 84;
    }
    return 0;
}

static int check_char_map(char *map)
{
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] != '#' && map[i] != ' ' && map[i] != 'P'
            && map[i] != 'O' && map[i] != 'X' && map[i] != '\n') {
            my_printf("Invalid charactere\n");
            return 84;
            }
    }
    return 0;
}

int error(int ac, char **av)
{
    char *map = NULL;

    if (ac != 2)
        return 84;
    map = reading_file(av[1]);
    if (check_map(map) == 84)
        return 84;
    if (check_char_map(map) == 84)
        return 84;
    return 0;
}
