#include "../../include/Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout	<< YELLOW << "Dog default constructor called" << RESET << std::endl;
	return ;
}

Dog::Dog(const Dog &tocpy)
{
	std::cout	<< YELLOW << "Dog cpy constructor called" << RESET << std::endl;
	*this = tocpy;
	return ;
}

Dog::~Dog()
{
	std::cout	<< YELLOW << "Dog default destructor called" << RESET << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout	<< CYAN << "**Wau wau** " << RESET << std::endl;
	return;
}