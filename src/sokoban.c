/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoban
*/

#include <curses.h>
#include <string.h>
#include "struct.h"
#include "my.h"
#include <unistd.h>
#include <stdlib.h>
#include "sokoban.h"


static move_t get_move(move_t move, int key)
{
    if (key == 67)
        move = move_right(move);
    if (key == 68)
        move = move_left(move);
    if (key == 66)
        move = move_down(move);
    if (key == 65) {
        move = move_up(move);
    }
    return move;
}

static void display_map(char **map, move_t move)
{
    for (int i = 0; map[i] != NULL; i++) {
        mvprintw(LINES/2 + i, COLS/2, map[i]);
    }
    mvprintw(LINES/2 + move.y, COLS/2 + move.x, "P");
}

int game(move_t move, char **original_map)
{
    int key;

    initscr();
    curs_set(0);
    noecho();
    while (key != 'o') {
        if (winned(move.map) == 1)
            break;
        if (key == 32)
            move = reset_whole_map(move, original_map);
        move = get_move(move, key);
        move.map = reset_map(move, original_map);
        display_map(move.map, move);
        key = getch();
        clear();
    }
    endwin();
    return 0;
}
