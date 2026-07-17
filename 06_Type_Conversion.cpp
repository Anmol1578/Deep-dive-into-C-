#include <iostream>

int main()
{

    /*type conversion = conversion a value of one data type to another
     Implicit = automatic
     Explicit = proceed value with new data type (int)

    */

    double x = (int)3.14;  // result is 3 becaus its changes from double to int
    std::cout << x <<'\n';


    char y = 100;  // Explicit cast the char result  is D 

    std::cout << y;

    return 0;
}
