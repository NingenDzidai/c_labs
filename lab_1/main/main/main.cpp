#include <iostream>

int main()
{
	int choice, choice_inner;
	double x, y;

	choice = 0;
	choice_inner = 0;

	while (choice != 2) {
		std::cout << "Choose option:\n" 
				  << "1: Choose target\n" 
				  << "2: Exit\n";

		std::cin >> choice;
		if (choice != 1 && choice != 2)
			{
			std::cout << "Invalid choice! Please select 1 or 2!\n";
			}
		else
		{
			if (choice == 1) {
				std::cout << "Select target type\n" 
						  << "1: Circle\n" 
						  << "2: Rect with coords ((0, 0), (1, 1))\n";
				std::cin >> choice_inner;

				if (choice_inner != 1 && choice_inner != 2) {
					std::cout << "Invalid target type! Choose 1 or 2.\n";
					continue;
				}

				if (choice_inner == 1) {
					std::cout << "Enter coordinates\n";
					std::cin >> x >> y;
					if (x * x + y * y <= 1) {
						std::cout << "Chosen coordinates fit in circle with r=1\n";
					}
					else
					{
						std::cout << "Chosen coordinates dont fit in circle with r=1\n";
					}
				}

				if (choice_inner == 2) {
					std::cout << "Enter coordinates\n";
					std::cin >> x >> y;
					if (x <= 1 && y <= 1 && x >= 0 && y >= 0) {
						std::cout << "Chosen coordinates fit in rect\n";
					}
					else
					{
						std::cout << "Chosen coordinates dont fit in rect\n";
					}
				}
			}

			if (choice == 2) {
				std::cout << "Exiting program...\n";
				break;
			}
				
		}
	}
}