#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;

    v.push_back('1');
    v.push_back('2');

    std::vector<int>::iterator iter = v.begin();
    iter.base()
}