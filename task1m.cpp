#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct City{
    std::string cityName;
    double latitude, longitude;
};

struct Cities {
    std::vector<City> cities;

    //Cities(){
    void read(){
        std::ifstream fileOutPut;
        fileOutPut.open("wincities10k.txt");
        City c;
        while (fileOutPut>>c.cityName>>c.latitude>>c.longitude)
        {
            cities.push_back(c);
        }
        
    }
};

int main(){
    Cities cs;
    cs.read();
    return 0;
}