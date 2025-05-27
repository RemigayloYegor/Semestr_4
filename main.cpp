#include <iostream>
#include <vector>
#include <map>
#include <utility>

int main() 
{
    std::vector<int> V1, V2;
    std::multimap<int, int> M;
    std::copy(std::istream_iterator<int>(std::cin),std::istream_iterator<int>(),std::back_inserter(V1));
    std::copy(std::istream_iterator<int>(std::cin),std::istream_iterator<int>(),std::back_inserter(V2));
  
    /*
    *@brief Группировка элементов V2 по последней цифре (задача 21)
    */
    for (const auto& num : V2) 
    {
        int last_digit = num % 10;
        M.insert({last_digit, num});
    }
    
    std::vector<std::pair<int, int>> V;
    for (const auto& num1 : V1)
    {
        int last_digit = num1 % 10;
        auto range = M.equal_range(last_digit); 

        for (auto it = range.first; it != range.second; ++it) 
        {
            V.emplace_back(num1, it->second);
        }
    }

    std::cout << "Размер вектора V: " << V.size() << std::endl;
    std::cout << "Элементы вектора V:" << std::endl;
    for (const auto& pair : V)
    {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    return 0;
}
