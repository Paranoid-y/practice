#include <cstdint> // for fixed-width integers
#include <iostream>
 
int main()
{
    std::int8_t i{ 97 }; // int8_t is actually a type alias for signed char
    std::cout << i << std::endl;;
    return 0;
}