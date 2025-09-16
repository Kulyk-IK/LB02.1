// Lab_02.1.cpp
// <Кулик Дмитро>
// Лабораторна робота № 2.1.
// Лінійні програми.
// Варіант 13

#include <iostream>
#include <cmath>

int main() {
	double a; 
	double b; 
	
	std::cout << "Enter \"a\": "; std::cin >> a;
	std::cout << "Enter \"b\": "; std::cin >> b;

	double z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
	double z2 = (1 + sin(2 * b)) / cos(2 * b);

	std::cout << "z1 = " << z1 << std::endl;
	std::cout << "z2 = " << z2 << std::endl;

	return 0;
}