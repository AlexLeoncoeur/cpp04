#include "../../include/Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout	<< GREEN << "Cat default constructor called" << RESET << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	if (!this->_brain)
	{
		std::cout	<< RED << "Cat brain allocation failed" << RESET << std::endl;
		exit(1);
	}
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
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain();
		if (!this->_brain)
		{
			std::cout	<< RED << "Cat brain allocation failed" << RESET << std::endl;
			exit(1);
		}
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(i, rhs._brain->getIdea(i));
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout	<< CYAN << "**Miau 7v7r** " << RESET << std::endl;
	return;
}