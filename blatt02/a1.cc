#include <iostream>
#include <cmath>

double getInput(char name)
{
	double x;
	std::cout << "Enter " << name << ": " << std::flush;
	std::cin >> x;
	return x;	
}

void showResult(double a, double b, double c)
{
	double result1 = ((-b + std::sqrt(b * b - 4 * a * c)) / 2 * a);
	double result2 = ((-b - std::sqrt(b * b - 4 * a * c)) / 2 * a);
	std::cout << "Root 1: " << result1 << std::endl;
	std::cout << "Root 2: " << result2 << std::endl;
}

int main(int argc, char** argv)
{
	double a = getInput('a');
	double b = getInput('b');
	double c = getInput('c');
	
	if(a == 0 || b == 0 || (b * b - 4 * a * c) < 0)
	{
		std::cout << "Error: Invalid input." << std::endl;
		return 0;
	}
	
	showResult(a, b, c);
	return 0;
}