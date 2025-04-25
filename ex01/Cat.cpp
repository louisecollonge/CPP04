#include "Cat.hpp"

Cat::Cat() {
	brain = new Brain();
	type = "Cat";
	std::cout << ORANGE
			  << "Cat	constructor called."
			  << RESET << std::endl;
}

Cat::Cat( const Cat& other ) {
	type = other.type;
	std::cout << ORANGE
			  << "Cat	copy constructor called."
			  << RESET << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << ORANGE
			  << "Cat	destructor called."
			  << RESET << std::endl;
}

Cat	&Cat::operator=( const Cat& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << ORANGE 
			  << "<< Meeeoooow...	>>" 
			  << RESET << std::endl;
}
