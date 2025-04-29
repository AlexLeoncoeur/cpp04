#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"


int	main(void)
{
	{
		Dog	basic;
		{
			Dog tmp = basic;
			tmp.setIdea(0, "idea");
		}
		std::cout << basic.getIdea(0) << std::endl;
	}
	Animal	*animals[10];
	Cat		gato1;
	Cat		gato2;

	gato1.setIdea(0, "Hola");
	gato2 = gato1;
	gato2.setIdea(0, "Adios");
	std::cout << gato1.getIdea(0) << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	return (0);
}
