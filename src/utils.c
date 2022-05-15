/*
** EPITECH PROJECT, 2022
** utils
** File description:
** utils
*/

#include "struct.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char *deleting_player(char *map)
{
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'P')
            map[i] = ' ';
    }
    return map;
}

char *reading_file(char const *filepath)
{
    char *buffer;
    int fd = open(filepath, O_RDONLY);
    int size = 0;
    struct stat s;

    stat(filepath, &s);
    size = s.st_size;
    buffer = malloc(sizeof(char*) * (size + 1));
    read(fd, buffer, size);
    buffer[size] = '\0';
    return buffer;
}

move_t get_player_pos(move_t move, char const *map)
{
    move.y = 0;
    move.x = 0;
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'P')
            break;
        if (map[i] == '\n') {
            move.y += 1;
            move.x = 0;
        }
        move.x += 1;
    }
    move.x -= 1;
    return move;
}
