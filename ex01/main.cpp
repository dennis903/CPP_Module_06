#include <iostream>
#include <string>

typedef struct	s_Data
{
	std::string	s1;
	int			n;
}				Data;

uintptr_t serialize(Data* ptr)
{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data* deserialize(uintptr_t raw)
{
	Data*		ret;

	ret = reinterpret_cast<Data*>(raw);
	return (ret);
}

int				main()
{
	Data		*data = new Data;
	uintptr_t	temp;

	data->s1 = "hello";
	data->n = 123;
	std::cout << "=========== before serized ===========" << std::endl;
	std::cout << "s1 : " << data->s1 << std::endl;
	std::cout << "n : " << data->n <<std::endl;
	std::cout << "=========== first pointer value ===========" << std::endl; 
	std::cout << reinterpret_cast<uintptr_t>(data) << std::endl;
	temp = serialize(data);
	std::cout << "=========== serialized return value ==========" << std::endl;
	std::cout << temp << std::endl;
	std::cout << "=========== deserialize ===========" << std::endl;
	Data *temp2 = deserialize(temp);
	std::cout << "s1 : " << temp2->s1 << std::endl;
	std::cout << "n : " << temp2->n << std::endl;
	delete temp2;
	return (0);
}