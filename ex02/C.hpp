#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class C
{
	public:
		C();
		C(const C &_C);
		virtual ~C();
		C &operator = (const C &_C);
};
#endif