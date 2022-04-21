#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream inFile;
    int value;
    int sum = 0;
 
    inFile.open("output.txt");
    if (!inFile)
    {
        cout << "\nError opening file.\n";
    }

    while (inFile >> value)
    {
        if (value > 0)
        {
            cout << value << endl;
        }
        else
        {
            cout << "Value is smaller than: " << value << endl;
        }
    }

    cout << "Total sum is: " << sum << endl;

    inFile.close();
    return 0;
}