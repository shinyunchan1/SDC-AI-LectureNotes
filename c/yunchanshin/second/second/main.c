#include <stdio.h>

int for_assembly_function_test(int number)
{
	return number * 2;
}

int main(void)
{
	int return_value;
	int input_parameter = 3;
	return_value = for_assembly_function_test(input_parameter);
	printf("return_value = %d\n", return_value);

	return 0;
}
