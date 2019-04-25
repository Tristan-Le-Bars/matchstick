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

int matches_counter(game_t *game)
{
    int i = 0;
    int counter = 0;

    while (game->map[game->choosen_line][i] != '\0') {
        if (game->map[game->choosen_line][i] == '|')
            counter++;
        i++;
    }
    return (counter);
}

int check_match(game_t *game)
{
    if (game->matches > game->max_match)
        return (-1);
    if (game->matches <= 0)
        return (-2);
    if (matches_counter(game) < game->matches)
        return (-3);
}

int check_line(game_t *game)
{
    if (game->choosen_line > game->max_line || game->choosen_line <= 0)
        return (-1);
    if (game->choosen_line <= 0)
        return (-2);
    return (0);
}

int shell_input_line(game_t *game)
{
    char *buffer;
    size_t len = 0;
    int back = 0;

    while (1) {
        my_printf("Line: ");
        if (getline(&buffer, &len, stdin) == -1)
            return (-1);
        game->choosen_line = my_getnbr(buffer);
        back = check_line(game);
        if (back == -2)
            my_printf("Error: invalid input (positive number expected)\n");
        else if (back == -1)
            my_printf("Error: this line is out of range\n");
        else
            break;
    }
    game->choosen_line = my_getnbr(buffer);
    return (game->choosen_line);
}

int shell_input_match(game_t *game)
{
    char *buffer;
    size_t len = 0;

    while (1) {
        my_printf("Match: ");
        if (getline(&buffer, &len, stdin) == -1)
            return (-1);
        game->matches = my_getnbr(buffer);
        check_match(game);
        if (check_match(game) == -2)
            my_printf("Error: you have to remove at least one match\n");
        else if (check_match(game) == -1) {
            my_printf("Error: you cannot remove more than %d", game->max_match);
            my_printf(" matches per turn\n");
        }
        else if (check_match(game) == -3)
            my_printf("Error: not enough matches on this line\n");
        else
            break;
    }
    return (game->matches);
}