// file text are in below

// 5
// Tempora mutantur et nos mutamur in illis.
// 10
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream file_in, file_string;
    file_in.open("D:\\JS\\output.txt");

    int i;
    file_in >> i;
    std::cout << i << std::endl;
    // ---------------------------------------
    std::string line;
    //getline() read white space. string also take white space. so, why  it is selecting unread index space?
    // file_string >> line;------>why it is not giving output?
    file_in >> line; // why it give output only -> Tempora . why not full line? we can expect full line because it is string
    std::cout << line << std::endl;
    // ---------------------------------------

    char characters[50];
    file_in >> characters; //output mutantur. why not full line? because string length is less than 50 characters
    std::cout << characters << std::endl;
    return 0;
}
