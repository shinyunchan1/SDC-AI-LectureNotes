#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include "player.h"

// ������ Ÿ�� char (1byte) <- ���ڸ� ������ �� ����
// �迭�� ����� ���
// -> ���� ����� ����� ������
// 1. ������ Ÿ���� �����ϴ�.
// 2. �迭�� �̸��� �����ϴ�.
// 3. ���ȣ�� ���� �迭�� ������ �����ϴ�. ex) [PLAYER_NAME_MAX]
// 4. �ʿ��ϴٸ� �ʱ�ȭ�� �ϴµ� �켱�� �����մϴ�.
char player_name[PLAYER_NAME_MAX];

void set_player_name(char name[])
{
	// string length�� ���ڷ� ���ڿ��� ���̸� ���մϴ�.
	const int player_name_length = strlen(name);
	// strncpy �� ���ڿ��� ������ ���ڸ�ŭ �����մϴ�.
	// strncpy(����� ��ġ, ������ �༮, ������ ����)
	//         ������ ������ ���� (���� 1��) ������ �̷�����ϴ�.
	//         �߰������� �ѱ��� �� ���ڴ� 2 ~ 3byte �� �����Ƿ� ����� �ٸ� ���ڰ� ���� �� �ֽ��ϴ�.
	strncpy(player_name, name, player_name_length + 1);
}

void print_player_name(void)
{
	// %s �� ���ڿ��� ����� �� ����մϴ� (���� ���)
	printf("����� �̸��� %s\n", player_name);
}