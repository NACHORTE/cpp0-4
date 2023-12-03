#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog & src);
		~Dog(void);
		void makeSound(void) const;
		Dog & operator=(const Dog & rhs);
};
