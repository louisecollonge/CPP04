#include "Cure.hpp"

Cure::Cure() : AMateria( "cure" ) {}
Cure::Cure( const Cure& other ) : AMateria( other.type ) {}
Cure::~Cure() {}

Cure	&Cure::operator=( const Cure& other ) {
	(void)other;
	std::cerr << "Please use clone instead of = for materias" << std::endl;
	return *this;
}

AMateria*	Cure::clone() const { return new Cure(); }

void		Cure::use( ICharacter& target ) {
	std::cout << ORANGE
			  << "* heals "
			  << target.getName()
			  << "'s wound *"
			  << RESET << std::endl;
}
