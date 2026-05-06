#include "logic.h"
#include "util.h"
int main() {
	int a, b, c;

	cout << "Input three numbers: ";
	cin >> a >> b >> c;

	cout << "Before: ";
	printVariables(a, b, c);

	sortDescending(a, b, c);

	cout << "After: ";
	printVariables(a, b, c);

	return 0;
}