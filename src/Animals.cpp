#include <Animals.h>
#include <iostream>

//ANIMAL
Animal::Animal(std::string name)
{
	this->name = name;
}

void Animal::print_name()
{
	std::cout<<"The animal's name is "<<name<<"\n";
}

//DOG

void Dog::print_name()
{
	std::cout<<"The dog's name is "<<name<<"\n";
}

void Dog::play()
{
	std::cout<<name<<" plays!!!\n";
}

//CAT
void Cat::print_name()
{
	std::cout<<"The cat's name is "<<name<<"\n";
}
void Cat::hunt()
{
	std::cout<<name<<" hunts!!!\n";
}
