#include <dice_second.h>
#include <stdio.h>
#include "random_generator.h"
#include "dice_game.h"

int player_each_dice_number[MAX_PLAYER_NUMBER];
int player_index_count;

const int min = 1;
const int max = 6;

void roll_dice(const int index)
{
	player_each_dice_number[player_index_count++] = generate_random(min, max);
}
