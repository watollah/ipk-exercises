#include <iostream>
#include <cmath>

//die 0 kann nur mit eingabe 0 erreicht werden
//da wir nur multiplizieren, durch 2 teilen und addieren können wir nicht auf andere weise auf die 0 kommen
//alle positiven eingaben enden bei der 1

int getInput()
{
	int x;
	std::cout << "Enter number:" << std::flush;
	std::cin >> x;
	return x;	
}

void collatz(int number)
{
	std::cout << number << std::endl;
	if (number != 1 && number != 0 && number != -1 && number != -5 && number != -17)
	{
		if (number % 2 == 0) 
		{
			collatz(number / 2);
		}
		else
		{
			collatz(number * 3 + 1);
		}
	}
}

int main(int argc, char** argv)
{
	double n = getInput();
	collatz(n);	
	return 0;
}