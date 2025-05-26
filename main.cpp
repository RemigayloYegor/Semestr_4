#include <iostream>
#include <vector>
#include <map>
#include <utility>

int main() 
{
    std::vector<int> V1 = {123, 45, 67, 89, 12, 34, 56};
    std::vector<int> V2 = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    std::multimap<int, int> M;
  
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
