#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" )
{
	std::cout << BLUE
			  << "Cat constructor called."
			  << RESET << std::endl;
}

Cat::Cat( const Cat& other ) : Animal( "Cat" )
{
	std::cout << BLUE
			  << "Cat copy constructor called."
			  << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << BLUE
			  << "Cat destructor called."
			  << RESET << std::endl;
}

Cat	&Cat::operator=( const Cat& other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void	Cat::makeSound()
{
	std::cout << "Meow..." << std::endl;
}