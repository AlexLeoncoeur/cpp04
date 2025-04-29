#include "../../include/Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout	<< YELLOW << "Dog default constructor called" << RESET << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
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
	delete this->_brain;
	std::cout	<< YELLOW << "Dog default destructor called" << RESET << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout	<< CYAN << "**Wau wau** " << RESET << std::endl;
	return;
}

void	Dog::setIdea(int index, std::string idea) const
{
	this->_brain->setIdea(index, idea);
	return ;
}

std::string	Dog::getIdea(int index) const
{
	return (this->_brain->getIdea(index));
}