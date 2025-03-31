#include "../../include/Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	this->_type = "Cat";
	std::cout	<< GREEN << "Cat default constructor called" << RESET << std::endl;
	return ;
}

Cat::Cat(const Cat &tocpy)
{
	std::cout	<< GREEN << "Cat cpy constructor called" << RESET << std::endl;
	*this = tocpy;
	return ;
}

Cat::~Cat()
{
	std::cout	<< GREEN << "Cat default destructor called" << RESET << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}