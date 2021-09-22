
#ifndef CPPM_ARRAY_HPP
#define CPPM_ARRAY_HPP

#include "string"
#include "iostream"

template <typename T>
class Array {
private:
	T * _a;
	int _size;
public:

	Array(): _a(NULL), _size(0){};

	Array(unsigned int n): _a(new T[n]), _size(n){};

	~Array(){
		if (this->_a)
			delete this->_a;
	};

	Array(Array const & src){
		int i = 0;
		this->_size = src._size;
		this->_a =new T[src._size];

		while (i < src._size)
		{
			this->_a[i] = src._a[i];
			i++;
		}
	};

	Array  &operator=(Array const & src){
		int i = 0;
		if (*this != src)
		{
			if (this->_a)
				delete this->_a;
			this->_a = new T[src._size];
			while (i < src._size)
			{
				this->_a[i] = src._a[i];
				i++;
			}
		}
		return *this;
	};

	T & operator[](int i){
		if (i >= _size)
		{
			throw _limitsException();
		}
		return _a[i];
	};

	T & operator[](int i) const {
		if (i >= _size)
		{
			throw _limitsException();
		}
		return _a[i];
	};

	int size() const{
		return _size;
	};

	class _limitsException: public std::exception
	{
	public:
		virtual const char* what() const throw(){
			return "this element is out of the limits";
		}
	};
};

template<typename T>
std::ostream & operator<<(std::ostream & o, Array<T>  const & src)
{
	int i = 0;
	while (i < src.size())
	{
		o << src[i] << std::endl;
		i++;
	}
	return o;
}


#endif //CPPM_ARRAY_HPP
