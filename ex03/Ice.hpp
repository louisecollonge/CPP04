#pragma once

#define ORANGE	"\033[38;5;214m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria 
{		
	public:
		Ice();
		Ice( const Ice& other );
		Ice	&operator=( const Ice& other );
		virtual ~Ice();

		virtual AMateria*	clone() const;
		virtual void		use( ICharacter& target );
};
