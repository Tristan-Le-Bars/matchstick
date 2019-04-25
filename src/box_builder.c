/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** description
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "../include/my.h"
#include "../include/struct_matchstick.h"

int box_len(int line_number)
{
    int i = 0;
    int additionner = 1;

    while (i < line_number) {
        additionner += 2;
        i++;
    }
    return (additionner);
}

int line_allocation(game_t *game, int j, int a, int k)
{
    game->map[j] = malloc(sizeof(char) * (game->max_len + 1));
    while (k < game->max_len) {
        if (k == 0 || k == game->max_len - 1 || j == 0 || j == game->line - 1)
            game->map[j][k] = '*';
        else if (k >=  game->mid - a && k <= game->mid + a)
            game->map[j][k] = '|';
        else {
            game->map[j][k] = ' ';
        }
        k++;
    }
    game->map[j][k] = '\0';
}

void display(int line, char **map)
{
    int l = 0;

    while (l < line) {
        my_printf("%s\n", map[l]);
        l++;
    }
}

void build_box(game_t *game, int line_number)
{
    int a = 0;
    int j = 0;
    int k = 0;

    game->max_len = box_len(line_number);
    game->mid = game->max_len / 2;
    game->line = line_number + 2;
    game->map = malloc(sizeof(char *) * (game->line + 1));
    while (j < game->line) {
        line_allocation(game, j, a, k);
        k = 0;
        if (j > 0)
            a++;
        j++;
    }
    game->map[j] = NULL;
}