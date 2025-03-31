#pragma once

# include <string>
# include <iostream>
# include "colors.hpp"

class Animal
{

protected:

	std::string	_type;

public:

	Animal();
	Animal(std::string type);
	Animal(const Animal &tocpy);
	~Animal();

	Animal	&operator=(const Animal &rhs);

	std::string		getType() const;
	void			setType(std::string type);
	virtual void	makeSound() const;

};