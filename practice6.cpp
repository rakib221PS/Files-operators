// reading a text file
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ofstream appendData("output.txt", std::ios::app);

    std::string line;
    if (appendData.is_open())
    {
        for (int i = 0; i < 3; i++)
        {
            std::cout << "Enter line: " << i + 1 << " ";
            std::getline(std::cin, line);
            appendData << line << std::endl;
        }
    }
    else
        std::cout << "Unable to open file for appending data";

    appendData.close();

    std::ifstream outPutData("output.txt", std::ios::ate);
    std::string output;

    if (outPutData.is_open())
    {
        for (int i = 0; i < 3; i++)
        {
            std::getline(outPutData, output);
            std::cout << i + 1 << " " << output << std::endl;
        }
    }
    else
        std::cout << "Unable to open file for appending data";

    return 0;
}