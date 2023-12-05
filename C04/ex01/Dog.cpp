#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout<<"Dog default constructor called"<<std::endl;
}

Dog::Dog(const Dog & src) : Animal(src)
{
	std::cout<<"Dog copy constructor called"<<std::endl;
	brain = new Brain(*src.brain);
	*this = src;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout<<"Dog destructor called"<<std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		delete brain;
		brain = new Brain(*rhs.brain);
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout<<"Woof"<<std::endl;
}

void Dog::addIdea(const std::string &idea)
{
	brain->addIdea(idea);
}

void Dog::printIdeas(void) const
{
	size_t numofideas= brain->getNumberOfIdeas();
	for (size_t i = 0; i < numofideas ; i++)
		std::cout << brain->getIdea(i) << std::endl;
}
