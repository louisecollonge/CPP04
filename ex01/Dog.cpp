#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << BLUE
			  << "Dog	constructor called."
			  << RESET << std::endl;
	brain = new Brain();
}

Dog::Dog( const Dog& other ) {
	type = other.type;
	std::cout << BLUE
			  << "Dog	copy constructor called."
			  << RESET << std::endl;
	brain = new Brain(*other.brain);
}

Dog::~Dog() {
	std::cout << BLUE
			  << "Dog	destructor called."
			  << RESET << std::endl;
	delete brain;
}

Dog	&Dog::operator=( const Dog& other ) {
	if (this != &other) {
		delete brain;
		brain = new Brain(*other.brain);
		this->type = other.type;
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << BLUE 
			  << "<< Woof woof !	>>" 
			  << RESET << std::endl;
}
