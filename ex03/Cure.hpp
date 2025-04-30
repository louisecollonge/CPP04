#pragma once

#define ORANGE	"\033[38;5;214m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria 
{
	public:
		Cure();
		Cure( const Cure& other );
		Cure	&operator=( const Cure& other );
		virtual ~Cure();

		virtual AMateria*	clone() const;
		virtual void		use( ICharacter& target );
};
