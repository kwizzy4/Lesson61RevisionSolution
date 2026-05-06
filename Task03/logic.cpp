// Task 03 [The number of local extreme numbers]
// Количество локальных минимумов и максимумов
//
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.
#include "logic.h"
int count_local_extreme_numbers(int* array, int size) {
	if (array == nullptr || size <= 0) {
		return 0;
	}
	if (size == 1) {
		return 0;
	}
	int count = 0;

	for (int i = 0; i < size; i++) {
		if(i == 0) {
			if (array[0] != array[1]) {
				count++;
			}
		}
		else if (i == size - 1) {
			if (array[size - 1] != array[size - 2]) {
				count++;
			}
		}
		else {
			bool isStrictlyBetween = false;

			if (array[i - 1] < array[i] && array[i] < array[i + 1]) {
				isStrictlyBetween = true;
			}
			else if (array[i - 1] > array[i] && array[i] > array[i + 1]) {
				isStrictlyBetween = true;
			}
			if (!isStrictlyBetween) {
				count++;
			}
		}
	}
	return count;
}