/*
** EPITECH PROJECT, 2018
** struct
** File description:
** stucture for my_printf
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

#ifndef MATCH_STICK
#define MATCH_STICK

typedef struct game_table_s
{
    int line;
    int max_len;
    int max_line;
    int mid;
    int choosen_line;
    int matches;
    int max_match;
    int matches_rest;
    int winner;
    char **map;
}game_t;
#endif

int box_len(int line_number);
int line_allocation(game_t *game, int j, int a, int k);
void display(int line, char **map);
void build_box(game_t *game, int line_number);
void deleter(game_t *game, int i);
void map_changer(game_t *game);
int check_match(game_t *game);
int check_line(game_t *game);
int shell_input_line(game_t *game);
int shell_input_match(game_t *game);
void count_matches_total(game_t *game);
int matches_counter(game_t *game);
int paying_attention(game_t *game);
void ai_play(game_t *game);
void random_play(game_t *game);
void choose_line(game_t *game);
int matches_maximum_counter(game_t *game, int i);