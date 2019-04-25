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
#include <time.h>
#include "../include/my.h"
#include "../include/struct_matchstick.h"

int paying_attention(game_t *game)
{
    if (game->matches_rest < 15)
        return (1);
    return (0);
}

int matches_maximum_counter(game_t *game, int i)
{
    int j = 0;
    int counter = 0;

    while (game->map[i][j] != '\0') {
        if (game->map[i][j] == '|')
            counter++;
        j++;
    }
    return (counter);
}

void choose_line(game_t *game)
{
    int i = 0;
    int maximum = 0;
    int count = 0;

    while (i <= game->max_line) {
        count = matches_maximum_counter(game, i);
        if (count > maximum) {
            maximum = count;
            game->choosen_line = i;
        }
        i++;
    }
}

void random_play(game_t *game)
{
    choose_line(game);
    srand(time(NULL));
    while (game->matches > matches_counter(game))
        game->matches = rand() % (game->max_match) + 1;
    if (game->matches == 0)
        game->matches = 1;
}

void ai_play(game_t *game)
{
    choose_line(game);
    if (matches_counter(game) < game->matches_rest) {
        if (matches_counter(game) == game->max_match)
            game->matches = game->max_match;
        else if (matches_counter(game) < game->max_match)
            game->matches = matches_counter(game);
        else
            game->matches = game->max_match;
    }
    if (matches_counter(game) == game->matches_rest) {
        if (matches_counter(game) == game->max_match)
            game->matches = game->max_match - 1;
        if (matches_counter(game) < game->max_match)
            game->matches = matches_counter(game);
    }
    else
        random_play(game);
}