#include <iostream>
#include <vector>

// The typedef use to convert long datatype into a small words with the last words _t

// EX -  typedef std::vector<std::pair<std::string, int >> pairlist_t;

/*
typedef std::string text_t;
typedef int number_t;
*/

// Using keywords also do same but in first you need to declare the name of your coustom data type

using text_t = std::string;
using number_t = int;

int main()
{

    text_t firstName = "William";
    number_t Age = 25;

    std::cout << firstName << '\n'
              << Age;

    return 0;
}