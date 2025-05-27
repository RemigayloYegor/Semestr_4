#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>      

class LessAbs {
public:
    bool operator()(int a, int b) const {
        return std::abs(a) < std::abs(b);
    }
};

int main()
{
    std::vector<int> V = {3, -5, 2, 1, -4, 6, -2};
    auto it = std::adjacent_find(V.begin(), V.end(), std::not2(less_abs()));
    if (it != V.end()) 
    {
        std::cout << "Найдена пара: (" << *it << ", " << *(it + 1) << ")" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
