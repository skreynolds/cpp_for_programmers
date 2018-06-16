/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include "main.hpp"

int main(void){

	//initialise two cats
	Cat cat1, cat2;

	//set two cats names
	cat1.setName("Kimmy");
	cat2.setName("Bobby");

	//set two cats breeds
	cat1.setBreed("calico");
	cat2.setBreed("main coon");

	//set two cats ages
	cat1.setAge(4);
	cat2.setAge(1);

	//print the cat info
	cat1.printInfo();
	std::cout<<"\n\n";
	cat2.printInfo();
	std::cout<<"\n\n";

	//an alternative way to print the cat info
	std::cout<<cat1.getName()<<" "<<cat1.getBreed()<<" "<<cat1.getAge()<<"\n\n";
	std::cout<<cat2.getName()<<" "<<cat2.getBreed()<<" "<<cat2.getAge();

	return 0;

}
