#include "Convertor.hpp"

Convertor::Convertor()
{
}

Convertor::Convertor(const std::string &_input) : input(_input)
{
	this->value = atof(this->input.c_str());
}

Convertor::Convertor(const Convertor &_Convertor)
{
	*this = _Convertor;
}

Convertor::~Convertor()
{
}

Convertor&	Convertor::operator = (const Convertor &_Convertor)
{
	if (this == &_Convertor)
		return (*this);
	this->value = _Convertor.value;
	this->input = _Convertor.input;
	return (*this);
}

double  Convertor::getValue() const
{
	return (this->value);
}

char		Convertor::toChar()
{
	char	CharValue;

	CharValue = static_cast<char>(this->value);
	if (isNotScala() || isnan(this->value) || isinf(this->value))
		throw Convertor::Impossible();
	if (CharValue < 33 || CharValue > 126)
		throw std::string("Non displayable");
	else
		return (CharValue);
}

int			Convertor::toInt()
{
	int		IntValue;

	IntValue = static_cast<int>(this->value);
	if (isNotScala() || isnan(this->value) || isinf(this->value) ||
	value < INT_MIN || value > INT_MAX)
		throw Convertor::Impossible();
	return (IntValue);
}

float		Convertor::toFloat()
{
	float	FloatValue;

	FloatValue = static_cast<float>(this->value);
	if (isNotScala())
		throw Convertor::Impossible();
	return	(FloatValue);
}

double		Convertor::toDouble()
{
	double	DoubleValue;

	DoubleValue = static_cast<double>(this->value);
	if (isNotScala())
		throw Convertor::Impossible();
	return (DoubleValue);
}

const char*	Convertor::Impossible::what() const throw()
{
	return ("Impossible");
}

bool		Convertor::isNotScala()
{
	if (this->value == 0.0)
	{
		if (this->input.at(0) < '0' || this->input.at(0) > '9')
			return (true);
	}
	return (false);
}
