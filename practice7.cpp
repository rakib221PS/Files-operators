// reading an entire binary file
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    streampos size;
    char *memblock;

    ifstream file("output.txt", ios::in | ios::binary | ios::ate);
    if (file.is_open())
    {
        size = file.tellg();
        memblock = new char[size];
        file.seekg(0, ios::beg);
        file.read(memblock, size);
        file.close();

        cout << "the entire file content is in memory";
        for (int i = 0; i < size; i++)
        {
            cout << "from memory: " << memblock[i] << " " << endl;
        }
        delete[] memblock;
    }

    else
        cout << "Unable to open file";

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "from memory: " << memblock[i] << " " << endl;
    // }
    return 0;
}