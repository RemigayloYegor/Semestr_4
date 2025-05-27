#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>      

struct less_abs : public std::binary_function<int, int, bool> 
{
    less_abs() : std::function<bool(int, int)>([this](int a, int b)
    {
        return abs(a) < abs(b);
    }) {}
    }
};

int main()
{
    std::vector<int> V;
    std::copy(std::istream_iterator<int>(std::cin),std::istream_iterator<int>(),std::back_inserter(V));
    auto it = std::adjacent_find(V.begin(), V.end(), std::not2(less_abs()));
    if (it != V.end()) 
    {
        std::cout << "Найдена пара: (" << *it << ", " << *(it + 1) << ")" << std::endl;
    } else
    {
        std::cout << "0" << std::endl;
    }

    return 0;
}
