/*
** EPITECH PROJECT, 2022
** moves
** File description:
** moves
*/

#include "struct.h"
#include <stddef.h>
#include <curses.h>

move_t move_up(move_t move)
{
    if (move.map[move.y - 1][move.x] == '#')
        return move;
    if (move.map[move.y - 1][move.x] == 'X') {
        if (move.map[move.y - 2][move.x] == '#'
        || move.map[move.y - 2][move.x] == 'X')
            return move;
        move.map[move.y - 1][move.x] = ' ';
        move.map[move.y - 2][move.x] = 'X';
    }
    move.y -= 1;
    return move;
}

move_t move_down(move_t move)
{
    if (move.map[move.y + 1][move.x] == '#')
        return move;
    if (move.map[move.y + 1][move.x] == 'X') {
        if (move.map[move.y + 2][move.x] == '#'
        || move.map[move.y + 2][move.x] == 'X')
            return move;
        move.map[move.y + 1][move.x] = ' ';
        move.map[move.y + 2][move.x] = 'X';
    }
    move.y += 1;
    return move;
}

move_t move_right(move_t move)
{
    if (move.map[move.y][move.x + 1] == '#')
        return move;
    if (move.map[move.y][move.x + 1] == 'X') {
        if (move.map[move.y][move.x + 2] == '#'
        || move.map[move.y][move.x + 2] == 'X')
            return move;
        move.map[move.y][move.x + 1] = ' ';
        move.map[move.y][move.x + 2] = 'X';
    }
    move.x += 1;
    return move;
}

move_t move_left(move_t move)
{
    if (move.map[move.y][move.x - 1] == '#')
        return move;
    if (move.map[move.y][move.x - 1] == 'X') {
        if (move.map[move.y][move.x - 2] == '#'
        || move.map[move.y][move.x - 2] == 'X')
            return move;
        move.map[move.y][move.x - 1] = ' ';
        move.map[move.y][move.x - 2] = 'X';
    }
    move.x -= 1;
    return move;
}
