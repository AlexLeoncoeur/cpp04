#pragma once

# include "WrongAnimal.hpp"
# include <string>
# include <iostream>

class WrongCat : public WrongAnimal
{

private:

	

public:

	WrongCat();
	WrongCat(const WrongCat &tocpy);
	~WrongCat();

	WrongCat	&operator=(const WrongCat &rhs);

	void	makeSound() const;

};