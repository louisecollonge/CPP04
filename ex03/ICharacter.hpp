#pragma once

#define ORANGE	"\033[38;5;214m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

#include <iostream>
#include <string>

class AMateria; // avoids circular calling between ICharacter.hpp and AMateria.hpp

class ICharacter // I for interface. Defines what a character does. The virtual functions have to be defined by inheriting classes.
{
	public:
		ICharacter();
		ICharacter( const ICharacter& other );
		ICharacter&	operator=( const ICharacter& other );
		virtual ~ICharacter();

		virtual std::string const&	getName() const = 0;
		virtual void				equip( AMateria* m ) = 0;
		virtual void				unequip( int index ) = 0;
		virtual void				use( int index, ICharacter& target ) = 0;
};
