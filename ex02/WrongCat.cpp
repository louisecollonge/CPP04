#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << RED_DARK
			  << "WrongCat	constructor called."
			  << RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ) {
	type = other.type;
	std::cout << RED_DARK
			  << "WrongCat	copy constructor called."
			  << RESET << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << RED_DARK
			  << "WrongCat	destructor called."
			  << RESET << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << RED_DARK 
			  << "<< Meow... >>" 
			  << RESET << std::endl;
}
