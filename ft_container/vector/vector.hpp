#ifndef _VECTOR_HPP_
#define _VECTOR_HPP_

#include "ft.hpp"

using namespace ft;

template<class T, class Alloc = std::allocator<T>>
class vector
{
public:
    typedef T								value_type;
    typedef Alloc							allocator_type;
    typedef value_type&						reference;
    typedef const value_type&				const_reference;
	typedef typename Alloc::pointer			pointer;
	typedef typename Alloc::const_pointer	const_pointer;
	typedef ptrdiff_t 						difference_type;
	typedef size_t							size_type;

	class iterator
	{
		public:
			typedef random_access_iterator_tag	iterator_category;

			iterator&	operator++() { ++_point; return (*this); }
			iterator	operator++(int) { iterator tmp = *this; ++_point; return (tmp); }
			iterator&	operator--() { --_point; return (*this); }
			iterator	operator--(int) { iterator tmp = *this; --_point; return (tmp); }

			iterator	operator+(int n) { _point += n; return *this; }
			iterator	operator-(int n) { _point -= n; return *this; }
			iterator&	operator+=(int n) { _point += n; return *this; }
			iterator&	operator-=(int n) { _point -= n; return *this; }

			reference	operator[](int n) const;
			reference	operator*() const;
			pointer		operator->() const;
			pointer		base() const { return (_point); }
		
	}

private:
	value_type		_type;
	allocator_type	_alloc;
	reference		_typeRef;
	const_reference	_cTypeRef;
	pointer			_point;
	const_pointer	_cPoint;
	difference_type	_memDiff;
	size_type		_size;
};

#endif

/* vector();
explicit vector( const Allocator& alloc );
explicit vector( size_type count, const T& value = T(), const Allocator& alloc = Allocator());
vector( const vector& other );
template< class InputIt >
vector( InputIt first, InputIt last, const Allocator& alloc = Allocator() ); */