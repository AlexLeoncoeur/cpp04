#pragma once

# include "Animal.hpp"
# include <string>
# include <iostream>

class Dog : public Animal
{

private:



public:

	Dog();
	Dog(const Dog &tocpy);
	~Dog();

	Dog	&operator=(const Dog &rhs);

	void	makeSound() const;

};