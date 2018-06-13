/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers,
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution.
*/

#include <iostream>

using namespace std;

int main()
{
    float in1, in2;
    char operation;

    cout<<"Enter two numbers:\n";
    cin>>in1;
    cin>>in2;
    cout<<"Enter the operation '+','-','*','/':\n";
    cin>>operation;

	switch (operation){
	case '+' : cout<<in1<<" "<<operation<<" "<<in2<<" = "<<in1 + in2<<"\n";
		break;
	case '-' : cout<<in1<<" "<<operation<<" "<<in2<<" = "<<in1 - in2<<"\n";
		break;
	case '*' : cout<<in1<<" "<<operation<<" "<<in2<<" = "<<in1 * in2<<"\n";
		break;
	case '/' : cout<<in1<<" "<<operation<<" "<<in2<<" = "<<in1 / in2<<"\n";
		break;
	}

    return 0;
}
