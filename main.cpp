#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

void processNumbers(const std::string& name, const std::vector<int>& numbers) 
{
    std::ofstream outFile(name);
    if (!outFile) 
    {
        std::cerr << "Ошибка открытия файла: " << name << std::endl;
        return;
    }

    std::replace_copy(numbers.begin(), numbers.end(), 
                     std::ostream_iterator<int>(outFile, "  "), 0, 10);
}

int main() 
{
    std::string filename = "output.txt";
    std::vector<int> numbers = {6, 0, 3, 8, 0, 4, 5, 16};
    
    processNumbers(filename, numbers);
    
    return 0;
}