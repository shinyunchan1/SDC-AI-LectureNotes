#include <stdio.h>
#include "print_even.h"
#include "print_even_advanced.h"
#include "print_random.h"
#include "dice_game.h"
#include "player.h"

#define LOOP_MAX			5

int main(void)
{
	const int random_number_count = 10;
	const int start = 3;
	const int end = 13;

	int loop_count = 0;

	// ���� ~ �� ������ ���ڿ��� ¦���� ���
	print_even_number_from_start_to_end(start, end);

	printf("���� �� ������ �ڵ�!\n");
	print_even_number_from_start_to_end_advanced(start, end);

	// random ���� 10�� ����ϱ�
	print_random_number(random_number_count);

	// while ���� for���� ���������� �ݺ����� �ϳ��Դϴ�.
	// ���������� for�� �ణ ������ �������� ���� ����ϴ� ���̰�
	// while�� �ܼ��� ������ �������� �ϸ� ����ϴ� ���Դϴ�.
	// ���� �������� �κ��̱� ������ �� ������ �� �ʿ䵵 �����ϴ�.

	// - while�� ���� ����
	//   ���� �񱳴� if�� �����մϴ�.
	//   �Ұ�ȣ ���� ������ �����ϸ� �ݺ��� �˴ϴ�.
	//   �Ұ�ȣ ���� ������ �������� ���ϸ� �ݺ��� �ߴܵ˴ϴ�.

	// loop_count�� LOOP_MAX(5) ���� �۴ٸ� �ݺ�
	// �ٵ� '++' �� �پ� �ֱ� ������
	// loop_count�� �ݺ����� ���ڰ� 1�� �����ϰ� �˴ϴ�.

	// '++', '--' ���� ���� �����ڿ� ���� ������ ������ ������
	// ���� �������� ��� '++loop_count' ���°� �˴ϴ�.
	// �� ��쿣 �Ʒ� ������ �� �Ǳ� ������ ���� ������ ���˴ϴ�.
	// ���� �������� ��� 'loop_count++' �����Դϴ�.
	// �� ��쿣 ������ ���� �񱳵ǰ� ���Ŀ� ������ ���˴ϴ�.
	while (loop_count++ < LOOP_MAX)
	{
		printf("loop_count = %d\n", loop_count);
		roll_dice();
		print_dice_number();

		printf("�� �׳� ������: %d\n", dice_number);
	}

	set_player_name("hello");
	print_player_name();

	return 0;
}