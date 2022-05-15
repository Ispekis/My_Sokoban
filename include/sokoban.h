/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoban
*/

#include "struct.h"

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

char *deleting_player(char *map);
char *reading_file(char const *filepath);
int game(move_t move, char **original_map);
move_t get_player_pos(move_t move, char *map);
int error(int ac, char **av);
move_t move_up(move_t move);
move_t move_down(move_t move);
move_t move_left(move_t move);
move_t move_right(move_t move);
char **reset_map(move_t move, char **original_map);
move_t reset_whole_map(move_t move, char **original_map);
int winned(char **map);

    #define ERROR 84
#endif
