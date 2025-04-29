#include "Cure.hpp"

Cure::Cure() : AMateria( "cure" ) {}

Cure::Cure( const Cure& other ) : AMateria( other.type ) {}

Cure::~Cure() {}

Cure	&Cure::operator=( const Cure& other ) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

AMateria*	Cure::clone() const {
	return new Cure();
}

void		Cure::use( ICharacter& target ) {
	std::cout << ORANGE
			  << "Cure : * heals "
			  << target.getName()
			  << "'s wound *"
			  << RESET << std::endl;
}
