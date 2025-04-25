#include "Brain.hpp"

Brain::Brain() {
	std::cout << PINK
			  << "Brain	constructor called."
			  << RESET << std::endl;
}

Brain::Brain( const Brain& other ) {
	for (unsigned long i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	std::cout << PINK
			  << "Brain	copy constructor called."
			  << RESET << std::endl;
}

Brain::~Brain(){
	std::cout << PINK
			<< "Brain	destructor called."
			<< RESET << std::endl;
}

Brain	&Brain::operator=( const Brain& other )
{
	if (this != &other) {
		for (unsigned long i = 0; i < 100; ++i)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}
