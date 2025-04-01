#include "../../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
	{
		return this->_ideas[index];
	}
	return "";
}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
	return ;
}