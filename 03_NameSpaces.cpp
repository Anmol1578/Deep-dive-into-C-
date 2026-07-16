#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{

    // using namespace first; // dont need to add the first entity in cout
    // Ex   std::cout << x;

    // Namespace = Provide a solution for preventing name conflict in large project each entity has a unique name

    int x = 0;

    std::cout << x; // Result 0

    // :: the Two colons known as the scope resolution operator
    std::cout << first::x;
    std::cout << second::x;

    return 0;
}