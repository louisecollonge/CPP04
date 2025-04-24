#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" )
{
	std::cout << ORANGE
			  << "Dog constructor called."
			  << RESET << std::endl;
}

Dog::Dog( const Dog& other ) : Animal( "Dog" )
{
	std::cout << ORANGE
			  << "Dog copy constructor called."
			  << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << ORANGE
			  << "Dog destructor called."
			  << RESET << std::endl;
}

Dog	&Dog::operator=( const Dog& other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void	Dog::makeSound()
{
	std::cout << "Woof !" << std::endl;
}
