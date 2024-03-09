#ifndef ITER_HPP
# define ITER_HPP

#include <string>
template <typename T>
void iter(T *adress,  size_t length, void (*foo)(T &))
{
    if(adress == NULL || foo == NULL)
        return ;
    for (size_t i = 0; i < length; i++)
        foo(adress[i]);
}

#endif