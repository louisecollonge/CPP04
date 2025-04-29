#pragma once

#define ORANGE	"\033[38;5;214m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string	name;
		AMateria*	inventory[4];
	
	public:
		Character( std::string const & name );
		Character( const Character& other );
		Character&	operator=( const Character& other );
		virtual ~Character();

		virtual std::string const&	getName() const;
		virtual void				equip( AMateria* m );
		virtual void				unequip( int index );
		virtual void				use( int index, ICharacter& target );
};
