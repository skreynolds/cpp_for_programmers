/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

using namespace std;

int main(void){

	float num = 0;
	float temp;

	for (int i = 0; i < 5; i++){
		cout<<"\nEnter a number: ";
		cin>>temp;
		num += temp;
	}

	cout<<"The sum of the entered numbers is: "<<num<<"\n";
	cout<<"The average of the entered numbers is: "<<num/5<<"\n";

	return 0;
}
