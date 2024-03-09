#include "iter.hpp"
#include <iostream>
#include <cctype>

void ft_tolower(char &arg)
{
    arg = std::tolower(static_cast<unsigned char>(arg));
}

int main()
{
    char a[] = { 'A', 'B', 'C'};
    std::cout << a[0] << a[1] << a[2] << std::endl;

    ::iter(a, sizeof(a) / sizeof(char), ft_tolower);

    std::cout << a[0] << a[1] << a[2] << std::endl;
}