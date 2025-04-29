#pragma once

#define ORANGE	"\033[38;5;214m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria // Abstract class: cannot be instanciated directly. Inheriting classes need to implement it too.
{
	protected:
		std::string	type;

	public:
		AMateria( std::string const & type );
		AMateria( const AMateria& other );
		AMateria	&operator=( const AMateria& other );
		virtual ~AMateria();

		std::string const &	getType() const;

		virtual AMateria*	clone() const = 0;			// Purely virtual method bc of = 0: makes the whole class abstract.
		virtual void		use(ICharacter& target);	// Virtual allows polymorphism
};
