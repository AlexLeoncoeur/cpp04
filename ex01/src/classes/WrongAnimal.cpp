#include "../../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout	<< BLUE << "WrongAnimal default constructor called" << RESET << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout	<< BLUE << "WrongAnimal alternative constructor called" << RESET << std::endl;
	this->_type = type;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &tocpy)
{
	std::cout	<< BLUE << "WrongAnimal cpy constructor called" << RESET << std::endl;
	*this = tocpy;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout	<< BLUE << "WrongAnimal default destructor called" << RESET << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void		WrongAnimal::makeSound() const
{
	std::cout	<< CYAN << "**GenericWrongAnimalSound** " << RESET << std::endl;
	return;
}
