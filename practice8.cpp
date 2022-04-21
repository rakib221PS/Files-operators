#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ofstream out("output.txt", ios::binary);
    ifstream in("input.txt", ios::binary);

    vector<ios::pos_type> pos;
    pos.push_back(0);

    string line;
    while (getline(in, line))
        pos.push_back(in.tellg());

    size_t i = pos.size();
    if (i-- > 0)
        while (i-- > 0)
        {
            in.clear();
            in.seekg(pos[i]);
            getline(in, line);
            out << line << '\n';
        }
}