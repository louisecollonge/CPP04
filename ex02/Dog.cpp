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
	delete brain;
	std::cout << BLUE
			  << "Dog	destructor called."
			  << RESET << std::endl;
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

void Dog::setIdea(int index, const std::string& idea) { brain->setIdea(index, idea); }

std::string Dog::getIdea(int index) const { return brain->getIdea(index); }
