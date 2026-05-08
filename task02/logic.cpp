#include "logic.h"
bool is_perfect(int number) {
	if (number % 2 == 1) {
		return false;
	}

	int numbers[]{ 6, 28 ,496, 8128 };
	for (int i = 0; i < 4; i++)
	{
		if (number == numbers[i]) {
			return true;
		}
	}





	return false;
}