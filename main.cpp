#include <iostream>
#include <list>

int main() {
    std::list<int> L = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
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
