/*Goal: practice using a class.
**Create an array called roster, populate it
**with multiple instances of Dog, it has a size of SIZE.
**The create a function called
**printRoster(roster, SIZE) that will print
**all the information about all the dogs on the roster.
*/

#include "main.hpp"

int main(){

	const int SIZE = 5;

    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
	Dog roster[SIZE];

	roster[0].setName("Molly");
	roster[1].setName("Gabby");
	roster[2].setName("Misha");
	roster[3].setName("Zalia");
	roster[4].setName("Zoe");

	roster[0].setLicenseNumber(123);
	roster[1].setLicenseNumber(456);
	roster[2].setLicenseNumber(789);
	roster[3].setLicenseNumber(465);
	roster[4].setLicenseNumber(247);

    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}
