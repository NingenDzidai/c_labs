#include <iostream>
#include "lab_2_functions.h"

int main()
{
	double x, y;
	int choice;
	bool result;
	std::string filename;

	while (true) {
		
		std::cout << "1. Input from keyboard\n"
				  << "2. Input from file\n"
				  << "0. Exit\n";
		std::cin >> choice;
		if (choice == 1) {
			std::cout << "1. Check if hits rectangle\n"
					  << "2. Check if hits circle\n";
			std::cin >> choice;
			inputCoordinatesFromKeyboard(x, y);
			if (choice == 1) {
				result = checkHitRectangle(x, y);
			}
			else if (choice == 2) {
				result = checkHitCircle(x, y);
			}
			printResult(result);
		}

		else if (choice == 2) {
			while (true) {
				std::cout << "1. List files in current directory\n"
						  << "2. Output file\n"
						  << "3. Check if hits rectangle\n"
						  << "4. Chech if hits circle\n"
						  << "0. Exit\n";
				std::cin >> choice;

				if (choice == 1) {
					list_files();
				}
				else if (choice == 2) {
					std::cout << "Enter filename: ";
					std::cin >> filename;
					printfile(filename);
				}
				else if (choice == 3) {
					inputCoordinatesFromFile(&filename, &x, &y);
					result = checkHitRectangle(x, y);
					writeResult(filename, result);
					printfile(filename);
				}
				else if (choice == 4) {
					inputCoordinatesFromFile(&filename, &x, &y);
					result = checkHitCircle(x, y);
					writeResult(filename, result);
					printfile(filename);
				}
				else if (choice == 0) {
					break;
				}
				else {
					std::cout << "Enter valid option!\n";
			}
		}
		}

		else if (choice == 0) {
			std::cout << "Exiting...\n";
			break;
		}

		else {
			std::cout << "Enter valid option!\n";
		}
	}
	

	
}