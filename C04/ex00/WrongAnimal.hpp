#pragma once
#include <iostream>
#include "Animal.hpp"

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal & src);
		~WrongAnimal(void);
		void makeSound(void) const;
		const std::string& getType(void) const;
		WrongAnimal & operator=(const WrongAnimal & rhs);
	protected:
		std::string type;
};
