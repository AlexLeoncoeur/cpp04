#include "../../include/AAnimal.hpp"

AAnimal::AAnimal() : _type("GenericAAnimal")
{
	std::cout	<< BLUE << "AAnimal default constructor called" << RESET << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type)
{
	std::cout	<< BLUE << "AAnimal alternative constructor called" << RESET << std::endl;
	this->_type = type;
	return ;
}

AAnimal::AAnimal(const AAnimal &tocpy)
{
	std::cout	<< BLUE << "AAnimal cpy constructor called" << RESET << std::endl;
	*this = tocpy;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout	<< BLUE << "AAnimal default destructor called" << RESET << std::endl;
	return ;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}

/* void		AAnimal::makeSound() const
{
	std::cout	<< CYAN << "**GenericAAnimalSound** " << RESET << std::endl;
	return;
} */
