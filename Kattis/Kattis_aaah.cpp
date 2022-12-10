#include <iostream>

int main()
{
    // taking input
    std::string jon;
    std::string doc;
    std::cin >> jon;
    std::cin >> doc;

    // comparing length of strings
    if (jon.length() >= doc.length())
    {
        std::cout << "go";
    }
    else
    {
        std::cout << "no";
    }

    return 0;
}