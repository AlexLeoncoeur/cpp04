#include "../../include/Animal.hpp"

Animal::Animal()
{
	std::cout	<< BLUE << "Animal default constructor called" << RESET << std::endl;
	return ;
}

Animal::Animal(std::string type)
{
	std::cout	<< BLUE << "Animal alternative constructor called" << RESET << std::endl;
	this->_type = type;
	return ;
}

Animal::Animal(const Animal &tocpy)
{
	std::cout	<< BLUE << "Animal cpy constructor called" << RESET << std::endl;
	*this = tocpy;
	return ;
}

Animal::~Animal()
{
	std::cout	<< BLUE << "Animal default destructor called" << RESET << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void		Animal::makeSound() const
{
	std::cout	<< CYAN << "**GenericAnimalSound** " << RESET << std::endl;
	return;
}
