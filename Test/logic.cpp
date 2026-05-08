#include "util.h"

void sort_bubble(int array[], int size) {
	if (size <= 0) {
		return;
	}
	//
	for (int i = 0; i < size - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1]) {
				flag = false;
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
}