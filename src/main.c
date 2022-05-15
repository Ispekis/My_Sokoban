/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "struct.h"
#include "my.h"
#include "sokoban.h"
#include <stddef.h>
#include <stdlib.h>

static int usage(char **av, char *binary, int ac)
{
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            my_printf("USAGE\n\t%s map\n", binary);
            my_printf("DESCRIPTION\n");
            my_printf("\tmap\tfile representing the warehouse map");
            my_printf(", containing '#' for walls,\n\t\t'P' for the player");
            my_printf(", 'X' for the boxes and 'O' for storage locations.\n");
            return 1;
        }
    }
    return 0;
}

static void free_all(move_t move, char *map, char **original_map)
{
    free(map);
    for (int i = 0; move.map[i] != NULL; i++)
        free(move.map[i]);
    for (int i = 0; original_map[i] != NULL; i++)
        free(original_map[i]);
}

int main(int ac, char **av)
{
    move_t move;
    char *map = NULL;
    char **original_map = NULL;

    move.map = NULL;
    if (usage(av, av[0], ac) == 1)
        return 0;
    if (error(ac, av) == ERROR)
        return ERROR;
    map = reading_file(av[1]);
    move = get_player_pos(move, map);
    move.ori_x = move.x;
    move.ori_y = move.y;
    map = deleting_player(map);
    move.map = my_str_to_word_array(move.map, map, '\n');
    original_map = my_str_to_word_array(original_map, map, '\n');
    game(move, original_map);
    free_all(move, map, original_map);
    return 0;
}
