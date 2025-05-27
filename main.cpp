#include <iostream>
#include <list>

int main() {
    std::list<int> L;
    std::cout << "Введите данные: ";
    std::copy(std::istream_iterator<int>(std::cin), std::istream_iterator<int>(),std::back_inserter(L)
    );
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
