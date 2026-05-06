// Task 05 [The sum of elements between first extreme elements]
// Сумма элементов между первыми экстримальными элементами  
// 
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет сумму элементов вектора, расположенных
// между первыми максимальным по модулю и минимальным по модулю элементами.
#include "logic.h"
#include <cmath>

int sum_between_first_min_max(int* array, int size) {
	if (array == nullptr || size < 2) {
		return 0;
	}
	int maxAbsIndex = 0;
	int maxAbsValue = abs(array[0]);

	for (int i = 0; i < size; i++) {
		if (abs(array[i]) > maxAbsValue) {
			maxAbsValue = abs(array[i]);
			maxAbsIndex = i;
		}
	}
	int minAbsIndex = 0;
	int minAbsValue = abs(array[0]);

	for (int i = 1; i < size; i++) {
		if (abs(array[i]) < minAbsValue) {
			minAbsValue = abs(array[i]);
			minAbsIndex = i;
		}
	}
	int left = maxAbsIndex;
	int right = minAbsIndex;

	if (left > right) {
		int temp = left;
		left = right;
		right - temp;
	}
	if (right - left <= 1) {
		return 0;
	}
	int sum = 0;
	for (int i = left + 1; i < right; i++) {
		sum += array[i];
	}
	return sum;
}