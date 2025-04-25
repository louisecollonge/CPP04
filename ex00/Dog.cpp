#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << BLUE
			  << "Dog	constructor called."
			  << RESET << std::endl;
}

Dog::Dog( const Dog& other ) {
	type = other.type;
	std::cout << BLUE
			  << "Dog	copy constructor called."
			  << RESET << std::endl;
}

Dog::~Dog() {
	std::cout << BLUE
			  << "Dog	destructor called."
			  << RESET << std::endl;
}

Dog	&Dog::operator=( const Dog& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << BLUE 
			  << "<< Woof woof !	>>" 
			  << RESET << std::endl;
}
