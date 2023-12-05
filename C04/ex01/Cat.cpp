#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout<<"Cat default constructor called"<<std::endl;
}

Cat::Cat(const Cat & src) : Animal(src)
{
	std::cout<<"Cat copy constructor called"<<std::endl;
	brain = new Brain(*src.brain);
	*this = src;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout<<"Cat destructor called"<<std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		delete brain;
		brain = new Brain(*rhs.brain);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout<<"Meow"<<std::endl;
}

void Cat::addIdea(const std::string &idea)
{
	brain->addIdea(idea);
}

void Cat::printIdeas(void) const
{
	size_t numofideas= brain->getNumberOfIdeas();
	for (size_t i = 0; i < numofideas ; i++)
		std::cout << brain->getIdea(i) << std::endl;
}