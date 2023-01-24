#ifndef _FT_HPP_
#define _FT_HPP_

#include <iostream>
#include <memory>
#include <deque>

namespace ft
{
    template<class T, class Alloc = std::allocator<T> >
    class vector;
    template<class Key, class T, class Compare = std::less<Key>, class Alloc = std::allocator<std::pair<const Key, T> > >
    class map; //std::pair bizim pair ile değişmeli 
    template<class T, class Container = std::deque<T> >
    class stack;
    template <class Iterator>
    class iterator_traits;
    template <class T>
    class iterator_traits<T*>;
    template <class T>
    class iterator_traits<const T*>;
    template <class Iterator>
    class reverse_iterator;
    struct random_access_iterator_tag {};
}

#endif
