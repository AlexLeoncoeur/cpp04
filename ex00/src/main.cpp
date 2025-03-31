#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int	main(void)
{
	Animal	pipo;
	Cat		silvestre;
	Dog		dina;

	pipo.setType("Depredador");
	pipo.makeSound();
	silvestre.makeSound();
	dina.makeSound();

	std::cout	<< RED << silvestre.getType() << RESET << std::endl;
	std::cout	<< RED << dina.getType() << RESET << std::endl;
	return (0);
}