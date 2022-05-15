/*
** EPITECH PROJECT, 2022
** reset map
** File description:
** reset map
*/

#include "struct.h"
#include <stddef.h>

static char *run_into_map(char *map, char *original_map)
{
    for (int i = 0; original_map[i] != '\0'; i++) {
        if (original_map[i] == 'O' && map[i] == ' ') {
            map[i] = 'O';
        }
    }
    return map;
}

char **reset_map(move_t move, char **original_map)
{
    for (int i = 0; original_map[i] != NULL; i++) {
        move.map[i] = run_into_map(move.map[i], original_map[i]);
    }
    return move.map;
}

static move_t run_whole_map(move_t move, char **original_map, int line)
{
    for (int y = 0; original_map[line][y] != '\0'; y++) {
        if (original_map[line][y] == ' ')
            move.map[line][y] = ' ';
        if (original_map[line][y] == 'X')
            move.map[line][y] = 'X';
        if (original_map[line][y] == 'O')
            move.map[line][y] = 'O';
    }
    return move;
}

move_t reset_whole_map(move_t move, char **original_map)
{
    for (int i = 0; original_map[i] != NULL; i++)
        move = run_whole_map(move, original_map, i);
    move.x = move.ori_x;
    move.y = move.ori_y;
    return move;
}
