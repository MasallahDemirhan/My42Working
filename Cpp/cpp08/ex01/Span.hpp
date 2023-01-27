#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

class Span
{
private:
    unsigned int _N;
    std::vector<int> _v;
public:
    Span(unsigned int N);
    Span(const Span& obj);
    Span& operator=(const Span& obj);
    ~Span();

    void addNumber(int n);
	void addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
    int shortestSpan();
    int longestSpan();

    class ContainerFullException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Container is full!!!");
		}
	};

	class ContainerNotEnoughException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Container is not enough!!!");
		}
	};
};






#endif
