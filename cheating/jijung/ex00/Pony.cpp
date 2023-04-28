#include "Pony.hpp"

Pony::Pony(std::string name, std::string food, std::string sentence):
	name_(name), food_(food), sentence_(sentence)
{
	std::cout << name_ << " was born!" << std::endl;
}

void	Pony::eat(void)
{
	std::cout << name_ << " eats " << food_ << "." << std::endl; 
}

void	Pony::speak(void)
{
	std::cout << name_ << " says " << sentence_ << "." << std::endl; 
}

Pony::~Pony(void)
{
	std::cout << name_ << " is dead." << std::endl;
}
