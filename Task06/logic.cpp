// Task 06 [The sorting from the specified range]
// Сортировка из указанного промежутка
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая сортирует часть элементов заданного вектора
// в указанном диапазоне порядковых номеров либо по возрастанию, 
// либо по убыванию.
#include "logic.h"
void sort_in_range(int* array, int size, int start, int end, bool type) {
	if (array == nullptr || size <= 0) {
		return;
	}
	if (start > end) {
		int temp = start;
		start = end;
		end = temp;
	}
	if (start < 0) start = 0;
	if (end >= size) end = size - 1;
	if (start >= end) {
		return;
	}
	if (type) {
		for (int i = start; i <= end; i++) {
			for (int j = start; j < end - (i - start); j++) {
				if (array[j] > array[j + 1]) {
					int temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
		}
	} else {
			for (int i = start; i <= end; i++) {
				for (int j = start; j < end - (i - start); j++) {
					if (array[j] < array[j + 1]) {
						int temp = array[j];
						array[j] = array[j + 1];
						array[j + 1] = temp;
					}
				}
			}
		}
	}