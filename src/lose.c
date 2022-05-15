/*
** EPITECH PROJECT, 2022
** losing condition
** File description:
** losing condition
*/

#include "struct.h"
#include <stddef.h>
#include "my.h"

static int check_each_line(char *map)
{
    int count = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'O')
            count++;
    }
    return count;
}

int winned(char **map)
{
    int count = 0;

    for (int i = 0; map[i] != NULL; i++) {
        count += check_each_line(map[i]);
    }
    if (count == 0)
        return 1;
    return 0;
}
