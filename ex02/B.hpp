#ifndef B_HPP
# define B_HPP
# include "Base.hpp"

class B
{
	public:
		B();
		B(const B &_B);
		virtual ~B();
		B &operator = (const B &_B);
};
#endif