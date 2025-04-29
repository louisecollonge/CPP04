#pragma once

#define ORANGE			"\033[38;5;214m"
#define BOLD_RED 		"\033[1;31m"
#define RED 			"\033[0;31m"
#define PINK	 		"\033[0;35m"
#define DARK_GREEN		"\033[38;5;22m"
#define LIGHT_GREEN		"\033[38;5;46m"
#define BLUE_DARK		"\033[34m"
#define BLUE			"\033[34m"
#define BOLD 			"\033[1m"
#define RED_DARK		"\033[31m"
#define PURPLE_DARK 	"\033[38;5;54m"
#define PURPLE_LIGHT	"\033[95m"
#define RESET			"\033[0m"

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria // Abstract class: cannot be instanciated directly
{
	protected:
		std::string	type;

	public:
		AMateria( std::string const & type );
		AMateria( const AMateria& other );
		AMateria	&operator=( const AMateria& other );
		virtual ~AMateria();

		std::string const &	getType() const;

		virtual AMateria*	clone() const = 0; // Purely virtual method bc of = 0 : 
											   // makes the whole class abstract.
											   // Inheriting classes need to implement it too.
		virtual void		use(ICharacter& target);	// Virtual allows polymorphism
};
