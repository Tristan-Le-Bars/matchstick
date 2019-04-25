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

void ai_turn(game_t *game)
{
    my_printf("\nAI's turn...\n");
    if (paying_attention(game) == 1) {
        ai_play(game);
    }
    else {
        random_play(game);
    }
    game->matches_rest -= game->matches;
    if (game->matches_rest == 0)
        game->winner = 1;
    my_printf("AI removed %d ", game->matches);
    my_printf("match(es) from line %d\n", game->choosen_line);
    map_changer(game);
    display(game->line, game->map);
}

void your_turn(game_t *game)
{
    my_printf("Player removed %d ", game->matches);
    my_printf("match(es) from line %d\n", game->choosen_line);
    map_changer(game);
    display(game->line, game->map);
}

int game_loop(game_t *game, int line_number)
{
    build_box(game, line_number);
    display(game->line, game->map);
    while (game->winner == 0) {
        my_printf("\nYour turn:\n");
        if (shell_input_line(game) == -1 || shell_input_match(game) == -1)
            return (0);
        game->matches_rest -= game->matches;
        if (game->matches_rest == 0)
            game->winner = 1;
        your_turn(game);
        if (game->matches_rest == 0) {
            game->winner = 2;
            break;
        }
        ai_turn(game);
    }
    if (game->winner == 1)
        my_printf("I lost... snif... but I'll get you next time!!\n");
    if (game->winner == 2)
        my_printf("You lost, too bad...\n");
    return (game->winner);
}

int main(int ac, char **av)
{
    int line_number;
    game_t *game = malloc(sizeof(game_t));
    game->choosen_line = 0;
    game->matches = 0;
    game->winner = 0;
    game->max_match = my_getnbr(av[2]);
    if (ac <= 1)
        return (84);
    line_number = my_getnbr(av[1]);
    game->max_line = my_getnbr(av[1]);
    game->matches_rest = game->max_line * game->max_line;
    return (game_loop(game, line_number));
}