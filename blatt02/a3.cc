#include <iostream>
#include <cmath>
#include <map>

std::map<int, long long> cache;

int getInput()
{
	int x;
	std::cout << "Enter number: " << std::flush;
	std::cin >> x;
	return x;	
}

void showResult()
{
	for (auto const& pair: cache) {
		std::cout << "fibonacci(" << pair.first - 1 << ") = " << pair.second << std::endl;
	}
}

long long fibonacci(long long number)
{
	if (number == 1) 
	{
		return 0;
	}
	else if (number == 2)
	{
		return 1;
	}
	else
	{
		std::map<int,long long>::iterator fibPair = cache.find(number);
		if (fibPair == cache.end()) 
		{
			long long fib = fibonacci(number);
			cache[number] = fib;
			return fib;
		} else {
			return fibPair->second;
		}
	}
}

int main(int argc, char** argv)
{
	double n = getInput();
	fibonacci(n);
	showResult();

	return 0;
}