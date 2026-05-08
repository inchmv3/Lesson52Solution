#include "logic.h"
bool is_perfect(int number) {
	if (number % 2 == 1) {
		return false;
	}

	int sum = 1;

	int n = number / 2;

	for (int i = 2; i <= n; i++)
	{
		if (number % n == 0) {
			sum += n;
		}
	}
	return number == sum;
}