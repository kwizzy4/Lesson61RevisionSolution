#include "util.h"
void printVariables(int a, int b, int c) {
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}
void readInput(int& a, int& b, int& c) {
	cout << "Input three numbers: ";
	cin >> a >> b >> c;
}