#include <iostream>
#include <list>

int main() {
    std::list<int> L;
    int n, num;
    std::cout << "Введите количество элементов в списке: ";
    std::cin >> n;
    std::cout << "Введите элементы списка через пробел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        L.push_back(num);
    }
    std::cout << "Исходный список: ";
    for (int elem : L)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    for (auto i = L.begin(); i != L.end(); )
      {
        i = L.erase(i);
        if (i != L.end()) {
            ++i; 
        }
    }
    std::cout << "Список после удаления четных элементов: ";
    for (int elem : L)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}
