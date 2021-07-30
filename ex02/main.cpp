#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
# include <iostream>
# include <cstdlib>
# include <ctime>

Base*	generate()
{
	int		rand_num;

	srand(time(NULL) * rand());
	rand_num = rand() % 3;
	if (rand_num == 0)
		return (new A);
	else if (rand_num == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	std::cout << "<pointer>" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "A class" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B class" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C class" << std::endl;
	else
		std::cout << "Nothing in base class" << std::endl;
}

void	identify(Base &p)
{
	std::cout << "<reference>" << std::endl;
	if (dynamic_cast<A*>(&p))
		std::cout << "A class" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B class" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C class" << std::endl;
	else
		std::cout << "Nothing in base class" << std::endl;
}

int		main()
{
	Base* base = generate();
	identify(base);
	identify(*base);
	delete base;
}