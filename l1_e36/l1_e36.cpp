/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
#include <string>

using namespace std;

int main(void){
    //initialise variables
    string usrName1, usrAddr1, usrPhone1, usrName2, usrAddr2, usrPhone2;

    //obtain name, address, and phone number from usr1
    cout<<"What is your name? ";
    getline(cin, usrName1);
    cout<<"What is your address? ";
    getline(cin, usrAddr1);
    cout<<"What is your phone number? ";
    getline(cin, usrPhone1);

    //print usr1 details to console
    cout<<usrName1<<"\n";
    cout<<usrAddr1<<"\n";
    cout<<usrPhone1<<"\n";

    //obtain name, address, and phone number from usr2
    cout<<"What is your name? ";
    getline(cin, usrName2);
    cout<<"What is your address? ";
    getline(cin, usrAddr2);
    cout<<"What is your phone number? ";
    getline(cin, usrPhone2);

    //print usr2 details to console
    cout<<usrName2<<"\n";
    cout<<usrAddr2<<"\n";
    cout<<usrPhone2<<"\n";

    return 0;
}