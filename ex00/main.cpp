#include "Convertor.hpp"

int			main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Convertor convertor(argv[1]);

		try
		{
			char	value;
			std::cout << "char : ";
			value = convertor.toChar();
			std::cout << "\'" << value << "\'" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (std::string &str)
		{
			std::cout << str << std::endl;
		}
		try
		{
			int		value;
			std::cout << "int : ";
			value = convertor.toInt();
			std::cout << value << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			float	value;
			std::cout << "float : ";
			value = convertor.toFloat();
			if (static_cast<int>(value) - value == 0)
				std::cout << value << ".0f" << std::endl;
			else
				std::cout << value << "f" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			double	value;
			std::cout << "double : ";
			value = convertor.toDouble();
			if (static_cast<int>(value) - value == 0)
				std::cout << value << ".0" << std::endl;
			else
				std::cout << value << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return(0);
}