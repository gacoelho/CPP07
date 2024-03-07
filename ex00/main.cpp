#include "whatever.hpp"
#include <iostream>

int main()
{
    int a = 42;
    int b = 21;

    std::cout << "max of a: " << a << " and b: "  << b << " is: " 
    << ::max(a,b) << std::endl;
    std::cout << "min of a: " << a << " and b: "  << b << " is: " 
    << ::min(a,b) << std::endl;

    swap(a,b);

    std::cout << "a and b were changed" << std::endl;

    std::cout << "max of a: " << a << " and b: "  << b << " is: " 
    << ::max(a,b) << std::endl;
    std::cout << "min of a: " << a << " and b: "  << b << " is: " 
    << ::min(a,b) << std::endl;

    std::string c = "str c";
    std::string d = "str d";

    std::cout << "max of c: " << c << " and d: "  << d << " is: " 
    << ::max(c,d) << std::endl;
    std::cout << "min of c: " << c << " and d: "  << d << " is: " 
    << ::min(c,d) << std::endl;

    swap(c,d);

    std::cout << "c and d were changed" << std::endl;

    std::cout << "max of c: " << c << " and d: "  << d << " is: " 
    << ::max(c,d) << std::endl;
    std::cout << "min of c: " << c << " and d: "  << d << " is: " 
    << ::min(c,d) << std::endl;
}