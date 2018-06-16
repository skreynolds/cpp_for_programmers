/*Goal: create a class that has two
*constructors; one that accepts
*input parameters and one that does
*not.
*/

#include "main.hpp"

int main()
{
    Dog d1;
    Dog d2("Kali");
    Dog d3(12345);
    Dog d4("Sammy", 65432);

    std::cout<<d1.getName()<<" "<<d1.getLicense()<<"\n";
    std::cout<<d2.getName()<<" "<<d2.getLicense()<<"\n";
    std::cout<<d3.getName()<<" "<<d3.getLicense()<<"\n";
    std::cout<<d4.getName()<<" "<<d4.getLicense()<<"\n";

    return 0;
}
