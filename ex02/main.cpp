#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
# include <cstdlib>
# include <ctime>

Base*	generate()
{
	int		rand_num;

	srand(time(NULL) * rand());
	rand_num = rand() % 3;
	if (rand_num == 0)
		return (new A);
	
}

int		main()
{
	Base* base = generate();
}