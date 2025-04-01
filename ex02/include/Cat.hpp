#pragma once

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class Cat : public AAnimal
{

private:

	Brain *_brain;

public:

	Cat();
	Cat(const Cat &tocpy);
	virtual ~Cat();

	Cat	&operator=(const Cat &rhs);

	void	makeSound() const;

};