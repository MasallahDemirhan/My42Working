#include "easyfind.hpp"
#include <vector>


int main()
{
    std::vector<int> v;

	v.push_back(1);
	v.push_back(8);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

    try
    {
        std::vector<int>::iterator it = easyfind(v, 2);
	    std::cout << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
	return 0;
}
