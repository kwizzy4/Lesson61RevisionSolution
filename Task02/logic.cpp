// Task 02 [The arithmetic mean of non-zero elements]
// Среднее арифметическое ненулевых элементов
//
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее арифметическое ненулевых 
// элементов вектора.
#include "logic.h"
double calculate_arithmetical_mean_of_nonzero_elements(int* array, int size) {
	if (array == nullptr || size <= 0) {
		return 0.0;
	}
	int sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] != 0) {
			sum += array[i];
			count++;
		}
	}
	if (count == 0) {
		return 0.0;
	}
	return static_cast<double>(sum) / count;
}