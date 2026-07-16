#include <iostream>
// using namespace std;

int main()
{

    int x; // declaration
    x = 5; // assignment
    int y = 7;

    std::cout << x << '\n';
    std::cout << y << '\n';

    // int data type  = number  8
    int age = 23;

    // double ( number including decimals ); 7.6
    double price = 10.99;

    // char  (single character)
    char grade = 'A';

    // bool ( true or false)
    bool IsRaining = true;

    // string (object that represents a squence of text in double or single quote);
    std::string name = "Ethan";

    std::cout << age << '\n'<< price << '\n' << grade << '\n' << IsRaining << '\n' << name << '\n';
    
    std::cout << "Hello " << name;

    return 0;
}