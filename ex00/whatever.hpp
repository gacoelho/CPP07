#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T> 
void swap(T &arg1, T &arg2)
{
    T tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;
}

template <typename U> 
const U &min (const U &arg1, const U &arg2)
{
    return(arg1 <= arg2 ? arg1 : arg2);
}

template <typename V>
const V &max (const V &arg1, const V &arg2)
{
    return(arg1 >= arg2 ? arg1 : arg2);
}
#endif