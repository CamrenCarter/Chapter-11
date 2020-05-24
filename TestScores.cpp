//Test Scre
//Author: Camren Carter

#include<iostream>
#include<string>
#include<array>

void Highest(double scores[999], double x) {
	for (int i = 1;i < x; ++i)
	{
		if (scores[0] < scores[i])
			scores[0] = scores[i];
	}
	std::cout << scores[0];
}

int main() {
	double scores[999] = {};
	int end = 0;
	std::string choice;
	double x = 1;
	int y;
	int average = 0;

	std::cout << "Please enter your test scores: ";
	std::cin >> scores[0];
	do {
		std::cout << "Do you wish to continue: yes/no" << std::endl;
		std::cin >> choice;

		if (choice == "yes") {
			std::cout << "Please enter another test score: ";
			std::cin >> scores[x];
			x++;
		}
		else if (choice == "no") {
			end++;
		}
		
	} while (end == 0);
	for (int i = 0; i < x; i++) {
		average += scores[i] / x;
	}
	std::cout << "The average is " << average << std::endl;
	Highest(scores, x);

}

