#pragma once

# include "Animal.hpp"
# include <string>
# include <iostream>

class Cat : public Animal
{

private:

	

public:

	Cat();
	Cat(const Cat &tocpy);
	~Cat();

	Cat	&operator=(const Cat &rhs);

};