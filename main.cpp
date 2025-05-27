#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>      
#include <iterator> 

int main()
{
    std::vector<int> V;
    std::copy(std::istream_iterator<int>(std::cin),std::istream_iterator<int>(),std::back_inserter(V));

    auto less_abs = [](int a, int b)
    {
        return std::abs(a) < std::abs(b);
    };

    auto it = std::adjacent_find(V.begin(), V.end(),  [&less_abs](int a, int b) { return !less_abs(a, b); });

    if (it != V.end()) 
    {
        std::cout << "Найдена пара: (" << *it << ", " << *(it + 1) << ")" << std::endl;
    } else
    {
        std::cout << "0" << std::endl;
    }

    return 0;
}
