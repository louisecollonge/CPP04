#pragma once

#define ORANGE			"\033[38;5;214m"
#define BOLD_RED 		"\033[1;31m"
#define RED 			"\033[0;31m"
#define PINK	 		"\033[0;35m"
#define DARK_GREEN		"\033[38;5;22m"
#define LIGHT_GREEN		"\033[38;5;46m" 
#define YELLOW			"\033[38;2;255;165;0m"
#define BLUE_DARK		"\033[34m"
#define BLUE			"\033[34m"
#define BOLD 			"\033[1m"
#define RED_DARK		"\033[31m"
#define PURPLE_DARK 	"\033[38;5;54m"
#define PURPLE_LIGHT	"\033[95m"
#define RESET			"\033[0m"

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		Animal( const Animal& other );
		virtual ~Animal(); // virtual allows destructor polymorphism : calling destructor of Cat/Dog first if necessary, then Animal

		Animal	&operator=( const Animal& other );

		virtual void	makeSound() const; // virtual allows function polymorphism : calling function of Cat/Dog only, if necessary
		std::string	getType() const;
};
