#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "player.h"

// 배열의 시작은 index 0번부터 시작합니다
// 주의사항 => 어셈블리어 코드에서도 봤듯이 메모리에 차원(Dimension) 개념은 없습니다
// 그래서 다차원 배열이라는 표현
char player_name[MAX_PLAYER_NUMBER][MAX_PLAYER_NAME_LENGTH];
int current_player_set_index;

void set_player_info(char name[])
{
	int input_player_name_length = strlen(name);

	strncpy(player_name[current_player_set_index++], name, input_player_name_length + 1);
	
}

void print_player_info(int index)
{
	printf("사용자 %d의 이름은 = %s\n", index, player_name[index]);
}