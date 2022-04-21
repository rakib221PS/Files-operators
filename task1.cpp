#include <fstream>
#include <iostream>
#include <string>
#include <vector>

struct File
{
    std::string cityName;
    double latitude, longitude;
    File()
    {
        std::string output;
        int numberOfLines = 0;
        std::ifstream fileOutPut;
        fileOutPut.open("wincities10k.txt");
        // for (int i = 0; i < 1000; i++)
        // {
        //     std::getline(fileOutPut, output);
        //     std::cout << output << std::endl;
        // }
        // bool success = std::getline(fileOutPut,output);
        // std::cout<<success;
        int i = 0;
        // while(std::getline(fileOutPut, output)){
        //     // numberOfLines++;
        // }
        // std::cout<<"Total number of lines are: "<<numberOfLines<<std::endl;

        while(fileOutPut.good()){
            getline(fileOutPut,output,' ');
            if (output != "")
            {
                cityName = output[0];
            }
            
        }
    }
};

int main()
{
    File file;
    File c;
    std::cout<<c.cityName;
    return 0;
}