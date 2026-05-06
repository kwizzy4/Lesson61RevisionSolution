// Task 04 [The arithmetic mean of non-extreme elements]
// Среднее арифметическое неэкстремальных элементов
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее рифметическое элементов
// вектора без учёта экстремальных элементов.
#include "logic.h"
double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	if (array == nullptr || size < 3) {
		return 0.0;
	}
	int minVal = array[0];
	int maxVal = array[0];

	for (int i = 1; i < size; i++) {
		if (array[i] < minVal) {
			minVal = array[i];
		}
		if (array[i] > maxVal) {
			maxVal = array[i];
		}
	}
	int sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] != minVal && array[i] != maxVal) {
			sum += array[i];
			count++;
		}
	}
	if (count == 0) {
		return 0.0;
	}
	return static_cast<double>(sum) / count;
}