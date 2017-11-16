#include <iostream>
#include <list>
#include <memory>
#include <Animals.h>

int main()
{
	std::list<std::shared_ptr<Animal>> animals;
	animals.push_back(std::make_shared<Cat>("Edgar"));
	animals.push_back(std::make_shared<Dog>("Paul"));
		//new Cat("Alfred"),
		//new Dog("Marc")
	//};
	for(auto animal : animals)
	{
		animal->print_name();
		auto cat = std::dynamic_pointer_cast<Cat>(animal);
		if(cat != nullptr)
		{
			cat->hunt();
		}
		auto dog = std::dynamic_pointer_cast<Dog>(animal);
		if(dog != nullptr)
		{
			dog->play();
		}
	}
	return EXIT_SUCCESS;
}
