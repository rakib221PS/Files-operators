// reading a text file
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream file1("output.txt");
    std::ifstream file2("input.txt");

    std::string line1, line2;
    if (file1.is_open() && file2.is_open())
    {
        for (int i = 0; i < 3; i++)
        {
            std::getline(file1, line1);
            std::cout << line1 << std::endl;
            std::getline(file2, line2);
            std::cout << line2 << std::endl;
        }
    }
    else
        std::cout << "Unable to open file for appending data";
    return 0;
}