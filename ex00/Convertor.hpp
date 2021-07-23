#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <exception>
# include <limits>

class Convertor
{
	private:
		double		value;
		std::string	input;
		Convertor();
	public:
		Convertor(const std::string &_input);
		Convertor(const Convertor &_Convertor);
		~Convertor();
		Convertor &operator = (const Convertor &_Convertor);
		double	getValue() const;
		char	toChar();
		int		toInt();
		float	toFloat();
		double	toDouble();
		bool	isNotScala();
		class Impossible : public std::exception
		{
			public:
				const char *what() const throw();
		};
};
#endif