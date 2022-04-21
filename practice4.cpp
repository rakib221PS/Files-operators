
// Remove the file input.txt, run it again. Now check the fail bit of file_in. Try to check if file_in is good before reading, and notify the user if something bad happened.
// is it ok???
#include <fstream>
#include <iostream>

int main()
{
    std::ifstream file_in;
    file_in.open("input.txt");
    if (file_in.good())
    {
        int i;
        file_in >> i;
        std::cout << i << std::endl;
    }
    else
    {
        std::cout<<"something bad"<<std::endl;
    }
    

    return 0;
}
