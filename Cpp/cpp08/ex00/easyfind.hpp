#pragma once


#include <algorithm>
#include <iostream>

class ElementNotFound: public std::exception
{

public:
    const char * what() throw ()
    {
        return "Element not found in container.";
    }

};


template <typename T>

typename T::iterator easyfind(T& container, int val)
{
    typename T::iterator res = find(container.begin(), container.end(), val);
    
    
    if (res == container.end())
    {   
        throw ElementNotFound;
    }
    else
    {
        return res;
    }
    
}