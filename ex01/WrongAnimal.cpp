#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type( "WrongAnimal" ) {
	std::cout << PURPLE_DARK
			  << "WrongAnimal	constructor called."
			  << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) : type( other.type ) {
	std::cout << PURPLE_DARK
			  << "WrongAnimal	copy constructor called."
			  << RESET << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << PURPLE_DARK
			  << "WrongAnimal	destructor called."
			  << RESET << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	WrongAnimal::makeSound() const {
	std::cout << BOLD_RED 
			  << "<< Grrr... >>" 
			  << RESET << std::endl; 
}

std::string	WrongAnimal::getType() const { return type; }
