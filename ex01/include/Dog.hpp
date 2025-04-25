#pragma once

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class Dog : public Animal
{

private:

	Brain *_brain;

public:

	Dog();
	Dog(const Dog &tocpy);
	virtual ~Dog();

	Dog	&operator=(const Dog &rhs);

	void	makeSound() const;
	void		setIdea(int index, std::string idea) const;
	std::string	getIdea(int index) const;
	
};