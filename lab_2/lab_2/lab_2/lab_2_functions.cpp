#include <iostream>
#include "lab_2_functions.h"
#include <fstream>
#include <cstdlib>

void inputCoordinatesFromKeyboard(double& x, double& y) {
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;
	std::cout << "x = " << x << ", y = " << y << "\n";
}

void inputCoordinatesFromFile(std::string* filename, double* x, double* y) {
	std::ifstream file(*filename);

	if (!file.is_open()) {
		std::cout << "File not found!" << std::endl;
		return;
	}
	file >> *x >> *y;
	std::cout << "x address = " << x << ", y address = " << y << "\n";
	std::cout << "x = " << *x << ", y = " << *y << "\n";
	file.close();
}

bool checkHitCircle(double x, double y) {
	double r;
	std::cout << "Enter radius: ";
	std::cin >> r; 
	if (x * x + y * y <= r * r) {
		return true;
	}
	else {
		return false;
	}
}

bool checkHitRectangle(double x, double y) {
	double a, b; 
	std::cout << "Enter a (width): ";
	std::cin >> a;
	std::cout << "Enter b (height): ";
	std::cin >> b;

	if (x >= 0 && x <= a && y >= 0 && y <= b) {
		return true;
	}
	else {
		return false;
	}
}

void printResult(bool result) {
	if (result == true) {
		std::cout << "Point is inside the figure" << std::endl;
	}
	else {
		std::cout << "Point is outside the figure" << std::endl;
	}
}

void writeResult(std::string filename, bool result) {
	std::ifstream infile(filename);
	std::string firstLine;
	if (infile.is_open()) {
		std::getline(infile, firstLine);
		infile.close();
	}

	std::ofstream file(filename);
	if (!file.is_open()) {
		std::cout << "File not found!" << std::endl;
		return;
	}

	if (!firstLine.empty()) {
		file << firstLine << std::endl;
	}

	if (result == true) {
		file << "Point is inside the figure" << std::endl;
	}
	else {
		file << "Point is outside the figure" << std::endl;
	}
	file.close();
}


void printfile(std::string filename) {
	std::ifstream file;
	file.open(filename);
	if (!file.is_open()) {
		std::cout << "File not found!" << std::endl;
		return;
	}
	std::cout << "-----Begin of the file-----" << std::endl;
	std::string line;
	while (std::getline(file, line)) {
		std::cout << line << std::endl;
	}
	file.close();
	std::cout << "-----End of the file-----" << std::endl;
}

void list_files() {
	std::cout << "\n";
	system("dir");
	std::cout << "\n";
}