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

class AMateria;

class ICharacter // I for interface. Defines what a character can do.
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
