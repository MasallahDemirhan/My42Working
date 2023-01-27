#include "Span.hpp"

Span::Span(unsigned int N): _N(N) { }

Span::Span(const Span& obj)
{
    *this = obj;
}

Span& Span::operator=(const Span& obj)
{
    for (size_t i = 0; i < _v.size(); i++)
        {
            this->_v[i] = obj._v[i];
        }

    this->_N = obj._N;

    return *this;
}

void Span::addNumber(int n)
{
    if (_v.size() < this->_N)
    {
        this->_v.push_back(n);
    }
    else
    {
        throw ContainerFullException();
    }
    
}

void Span::addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2)
{
    if (it2 - it1 + _v.size() < _N)
        _v.insert(_v.end(), it1, it2);
    else
        throw ContainerFullException();
}

int	Span::longestSpan()
{
    if (_v.size() < 2)
        throw ContainerNotEnoughException();
    int max = *max_element(_v.begin(), _v.end());
    int min = *min_element(_v.begin(), _v.end());
    return (max - min);
}

int Span::shortestSpan()
{
    int min = INT_MAX;
    if (_v.size() < 2)
        throw ContainerNotEnoughException();
    std::vector<int> temp = _v;
    sort(temp.begin(), temp.end());
    for (size_t i = 0; i < _v.size() - 1; i++)
    {
        if (min > temp[i + 1] - temp[i])
            min = temp[i + 1] - temp[i];
    }
    return (min);
}

Span::~Span(){}
