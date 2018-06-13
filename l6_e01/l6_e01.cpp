/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

using namespace std;

int main(void){

	//initialise the min and max values
	int max = 0;
	int min = 100;
	float sum = 0.0;
	int temp;

	for (int i = 0; i < 15; i++){
		cout<<"Enter a number: ";
		cin>>temp;

		if (temp > max){
			max = temp;
		} else if (temp < min) {
			min = temp;
		}

		sum += (float) temp;

	}

	cout<<"The max number is: "<<max<<".\n";
	cout<<"The min number is: "<<min<<".\n";
	cout<<"The average is: "<<sum/15.0<<".\n";
	return 0;

}
