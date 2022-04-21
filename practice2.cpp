#include <iostream>

int main()
{
    int sum = 0;
    std::string su = "ab";
    // std::cout<<sum+su;----->string + int concatenate not possible by normal addition operator.
    char a[4] = "ab";
    std::cout << a + sum;
    // but it is possible between char and int.
    std::cout << std::endl;
    // let's give bad() istead of good()
    int value;

    std::cin >> value;
    // while (std::cin.good())
    while (std::cin.bad())
    // now if we take character instead of int then it will return false which satisfy while loop condition and value will enter inside loop then try to concatenate.
    // but it will not concatenate and also not giving us to take next input.
    // what is happening here? is our input consider as string or something wrong happens here?
    {
        sum += value;
        std::cin >> value;
    }

    std::cout << "sum of inputted integers is " << sum << std::endl;
}
