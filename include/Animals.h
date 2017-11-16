#ifndef ANIMALS_H
#define ANIMALS_H

#include <string>


class Animal
{
public:
	Animal(std::string name);
	virtual void print_name();
protected:
	std::string name;
};

class Dog : public Animal
{
public:
	using Animal::Animal;
	virtual void print_name() override;
	void play();
};

class Cat : public Animal
{
public:
	using Animal::Animal;
	virtual void print_name() override;
	void hunt();
};

#endif //ANIMALS_H
