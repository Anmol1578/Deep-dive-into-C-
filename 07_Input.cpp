#include <iostream>

int main()
{

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    std::cout << "What s your name: ? ";
    std::getline(std::cin, name); // Accept a string that include Whitespaces

    // std::cin >> name;

    std::cout << "What s your Age: ? ";
    std::cin >> age;

    std::cout << "Nice Name " << name << " You are " << age << " Years old";

    return 0;
}