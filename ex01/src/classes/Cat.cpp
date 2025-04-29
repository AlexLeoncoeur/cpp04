#include "../../include/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout	<< GREEN << "Cat default constructor called" << RESET << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
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
	delete this->_brain;
	std::cout	<< GREEN << "Cat default destructor called" << RESET << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout	<< CYAN << "**Miau 7v7r** " << RESET << std::endl;
	return;
}

void	Cat::setIdea(int index, std::string idea) const
{
	this->_brain->setIdea(index, idea);
	return ;
}

std::string	Cat::getIdea(int index) const
{
	return (this->_brain->getIdea(index));
}
