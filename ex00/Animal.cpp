#include "Animal.hpp"

Animal::Animal()
{
	std::cout << ORANGE
			  << "Animal constructor called."
			  << RESET << std::endl;
}

Animal::Animal( const Animal& other ) : Animal()
{
	std::cout << ORANGE
			  << "Animal copy constructor called."
			  << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << ORANGE
			  << "Animal destructor called."
			  << RESET << std::endl;
}

Animal	&Animal::operator=( const Animal& other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void	Animal::makeSound()
{

}

const std::string&	Animal::getType()
{
	return (type);
}
