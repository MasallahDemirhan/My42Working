#include "Span.hpp"

int main() 
{
	try{
		std::vector<int> numbers;

		for (int i = 0; i < 50000; i += 5)
			numbers.push_back(i);

		Span span(10000);

		span.addNumber(numbers.begin(), numbers.end());

		std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	}
	catch(std::exception& err)
	{
		std::cerr << err.what() << std::endl;
	}
	return 0;
}
