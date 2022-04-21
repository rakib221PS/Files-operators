// when input 123try then in ignore try because they are string.
// input try123 , both output 0, why?
// when input 123 try then first output 123 and it  can ingore try but why second output 0?
// input try 123 why both output 0?

#include<iostream>

int main() {
    int i;
    std::cin >> i; // we write '123   321' and press enter, 
                   // before the read operation is performed:
                   // buffer: 123   321\n
                   // index:  ^
                   // after the read operation is performed:
                   // buffer: 123   321\n
                   // index:     ^ 
    std::cout << "read int: `" << i << "'" << std::endl; // the number 123 gets printed
    std::cin >> i; // the program does not wait for the second input, since there are unread characters in the buffer
                   // the spaces are skipped until character '3' is reached, then cin parses "321" into an int
                   // after the second read operation is performed:
                   // buffer: 123   321\n
                   // index:           ^ 
    std::cout << "read int: `" << i << "'" << std::endl;
}

