/*Goal: practice creating and using a class
**Use the class 'Dog' to create to
**instances of the class, dog1 and dog2.
**Assign dog1 the name: Trixie
**Assign dog2 the name: Kali
**Assign dog1 the license #1234
**Assign dog2 the license #5678
*/


#include"main.hpp"

int main()
{
	//initialise dogs
	Dog dog1;
	Dog dog2;

	//assign dog names
	dog1.setName("Trixie");
	dog2.setName("Kali");

	//assign dog license numbers
	dog1.setLicenseNumber(1234);
	dog2.setLicenseNumber(5678);

	dog1.printInfo();
	std::cout<<"\n\n";
	dog2.printInfo();

    return 0;
}
