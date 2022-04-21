// confusion---------------------------->
// getline function stored \n. but you told that it is unread character. but last index is in null character.
// why we don't call null is unread character in this case?
#include<iostream>

int main() {
    std::string s;
    getline(std::cin, s);
                   //-----------------------> there are unread characters in the buffer, in this case the newline character
                   // getline reads until the first read neline (and consumes the newline as well)
                   // buffer: 123\n
                   // index:       ^ 
    std::cout << "read string: `" << s << "'" << std::endl; // the program will output an empty string
    int x;
    // cin>> x ; //1234\n
}

