#include "Animal.hpp"

Animal::Animal() : type( "Animal" ) {
	std::cout << DARK_GREEN
			  << "Animal	constructor called."
			  << RESET << std::endl;
}

Animal::Animal( const Animal& other ) : type( other.type ) {
	std::cout << DARK_GREEN
			  << "Animal	copy constructor called."
			  << RESET << std::endl;
}

Animal::~Animal() {
	std::cout << DARK_GREEN
			  << "Animal	destructor called."
			  << RESET << std::endl;
}

Animal	&Animal::operator=( const Animal& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Animal::makeSound() const {
	std::cout << DARK_GREEN 
			  << "<< ????????????	>>" 
			  << RESET << std::endl; 
}

std::string	Animal::getType() const { return type; }
