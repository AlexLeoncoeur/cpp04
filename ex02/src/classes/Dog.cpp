#include "../../include/Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout	<< YELLOW << "Dog default constructor called" << RESET << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	if (!this->_brain)
	{
		std::cout	<< RED << "Dog brain allocation failed" << RESET << std::endl;
		exit(1);
	}
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
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain();
		if (!this->_brain)
		{
			std::cout	<< RED << "Dog brain allocation failed" << RESET << std::endl;
			exit(1);
		}
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(i, rhs._brain->getIdea(i));
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