#include <iostream>
#include<cmath>

using namespace std;

int main(void)
{
    float coEff1, coEff2, constant;
    float exp1, exp2;
    float y;
    float x;
    //Calculate the value of y for a user defined three term polynomial
    //Get the coefficients, exponents, and the constants
    cout<<"What is the first coefficient?";
    cin>>coEff1;
    cout<<coEff1<<"\n";
    cout<<"What is the exponent of the first term?";
    cin>>exp1;
    cout<<exp1<<"\n";
    cout<<"What is the second coefficient?";
    cin>>coEff2;
    cout<<coEff2<<"\n";
    cout<<"What is the exponent of the second term?";
    cin>>exp2;
    cout<<exp2<<"\n";
    cout<<"What is the constant?";
    cin>>constant;
    cout<<constant<<"\n";
    //Print the complete equation
    cout<<"The polynomial we are solving is:\n";
    cout<<"\t"<<coEff1<<"*x^exp1 + "<<coEff2<<"*x^exp2 + "<<constant<<"\n";
    cout<<"\nWhat is the value of x?";
    cin>>x;
    cout<<x<<"\n";
    //Solve the equation with the given x
    y = coEff1*pow(x,exp1) + coEff2*pow(x,exp2) + constant;
    cout<<"y = "<<coEff1<<"*"<<x<<"^"<<exp1<<" + "<<coEff2<<"*"<<x<<"^"<<exp2<<" + "<<constant<<" = "<<y;
    return 0;
}
