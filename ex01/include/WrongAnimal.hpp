#pragma once

# include <string>
# include <iostream>
# include "colors.hpp"

class WrongAnimal
{

protected:

	std::string	_type;

public:

	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &tocpy);
	virtual ~WrongAnimal();

	WrongAnimal	&operator=(const WrongAnimal &rhs);

	std::string		getType() const;
	void			setType(std::string type);
	void			makeSound() const;

};