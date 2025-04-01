#pragma once

# include <string>
# include <iostream>
# include "colors.hpp"

class AAnimal
{

protected:

	std::string	_type;
	
public:
	
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &tocpy);
	virtual ~AAnimal();

	AAnimal	&operator=(const AAnimal &rhs);

	std::string		getType() const;
	void			setType(std::string type);
	virtual void	makeSound() const = 0;

};