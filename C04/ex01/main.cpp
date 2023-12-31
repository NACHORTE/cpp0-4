#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* animals[10];
	for (int i = 0; i < 5; i ++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i ++)
		animals[i] = new Cat();
	
	for (int i = 0; i < 10; i ++)
		delete animals[i];
	
	std::cout << std::endl;
	Dog* dog= new Dog();

	dog->addIdea("I want to eat");
	dog->addIdea("I want to sleep");
	dog->addIdea("I want to go poop");
	dog->printIdeas();

	Dog* dog2 = new Dog(*dog);
	delete dog;
	dog2->printIdeas();
	delete dog2;
	return (0);
}