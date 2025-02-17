#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "print_random.h"
#include "random_generator.h"

void print_random_number(const int count)
{
	int loop;

	const int min = 10;
	const int max = 20;

	srand(time(NULL));

	printf("10~20사이의 랜덤 번호 출력: \n");
	for (loop = 0; loop < count; loop++)
	{
		// x % (MAX - MIN +1) = MIN
		printf("%3d", generate_random(min, max));
	}
}