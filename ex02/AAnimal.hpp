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

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal();
		AAnimal( const AAnimal& other );
		virtual ~AAnimal();

		AAnimal	&operator=( const AAnimal& other );

		virtual void	makeSound() const = 0; // = 0 makes the function purely virtual, making the whole class "abstract" = non instanciable
		std::string	getType() const;
};
