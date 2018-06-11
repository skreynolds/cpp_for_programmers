/*Goal: practice using stringstream*/

/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void){

	string length_string, width_string;

	float length, width, area;

	cout<<"What is the length of the room? ";
	cin >> length_string;
	stringstream(length_string) >> length;

	cout<<"What is the width of the room? ";
	cin >> width_string;
	stringstream(width_string) >> width;

	area = length*width;

	cout<<"The area of the room is: "<<area<<" square meters\n";

	return 0;
}
