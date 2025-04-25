#include "AAnimal.hpp"

AAnimal::AAnimal() : type( "AAnimal" ) {
	std::cout << DARK_GREEN
			  << "AAnimal	constructor called."
			  << RESET << std::endl;
}

AAnimal::AAnimal( const AAnimal& other ) : type( other.type ) {
	std::cout << DARK_GREEN
			  << "AAnimal	copy constructor called."
			  << RESET << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << DARK_GREEN
			  << "AAnimal	destructor called."
			  << RESET << std::endl;
}

AAnimal	&AAnimal::operator=( const AAnimal& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	AAnimal::makeSound() const {
	std::cout << DARK_GREEN 
			  << "<< ????????????	>>" 
			  << RESET << std::endl; 
}


std::string	AAnimal::getType() const { return type; }
