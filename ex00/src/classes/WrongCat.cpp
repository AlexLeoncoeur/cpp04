#include "../../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout	<< GREEN << "WrongCat default constructor called" << RESET << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &tocpy)
{
	std::cout	<< GREEN << "WrongCat cpy constructor called" << RESET << std::endl;
	*this = tocpy;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout	<< GREEN << "WrongCat default destructor called" << RESET << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout	<< CYAN << "**Miau 7v7r** " << RESET << std::endl;
	return;
}