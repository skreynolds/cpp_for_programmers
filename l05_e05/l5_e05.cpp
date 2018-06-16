/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    string givenString;
    char givenChar;

    cout<<"Enter an integer: \n";
    cin>>givenInt;
    cout<<"The value is "<<givenInt<<" and it is stored at addres "<<&givenInt<<".\n";

    cout<<"Enter a float: \n";
    cin>>givenFloat;
    cout<<"The value is "<<givenFloat<<" and it is stored at addres "<<&givenFloat<<".\n";

    cout<<"Enter a double: \n";
        cin>>givenDouble;
        cout<<"The value is "<<givenDouble<<" and it is stored at addres "<<&givenDouble<<".\n";

    cout<<"Enter a string: \n";
    cin>>givenString;
    cout<<"The value is "<<givenString<<" and it is stored at addres "<<&givenString<<".\n";

    cout<<"Enter a character: \n";
    cin>>givenChar;
    cout<<"The value is "<<givenChar<<" and it is stored at addres "<<&givenChar<<".\n";


    return 0;
}
