#include "../include/AAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"


int	main(void)
{
	//const AAnimal		*pipo = new AAnimal();
	const AAnimal		*silvestre = new Cat();
	const AAnimal		*dina = new Dog();
	const WrongAnimal	*fakePipo = new WrongAnimal();
	const WrongAnimal	*fakeSilvestre = new WrongCat();

	//pipo->makeSound();
	silvestre->makeSound();
	dina->makeSound();
	fakePipo->makeSound();
	fakeSilvestre->makeSound();

	std::cout	<< RED << silvestre->getType() << RESET << std::endl;
	std::cout	<< RED << dina->getType() << RESET << std::endl;
	std::cout	<< RED << fakeSilvestre->getType() << RESET << std::endl;

	//delete	pipo;
	delete	silvestre;
	delete	dina;
	delete	fakePipo;
	delete	fakeSilvestre;
	return (0);
}