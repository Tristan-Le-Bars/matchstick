/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** description
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/struct_matchstick.h"

void deleter(game_t *game, int i)
{
    i--;
    while (game->matches != 0) {
        game->map[game->choosen_line][i] = ' ';
        game->matches--;
        i--;
    }
}

void map_changer(game_t *game)
{
    bool started = false;
    int i = 0;
    int counter = 0;

    while (game->map[game->choosen_line][i] != '\0') {
        if (game->map[game->choosen_line][i] == '|') {
            started = true;
            counter++;
        }
        if (started == true && game->map[game->choosen_line][i] != '|')
            deleter(game, i);
        i++;
    }
}

