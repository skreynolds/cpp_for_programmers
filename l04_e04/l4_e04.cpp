/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>

using namespace std;

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int e1, e2, e3, e4;

	//(A and B and C) or (A and( (not B) or (not C))) = Q
    e1 = (A && B && C);
	e2 = !B || !C;
	e3 = A && (!B || !C);
    e4 = (A && B && C) || (A && (!B || !C));

    //Use this output format
    // std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<e1<<"\t\t\t"<<e2<<"\t\t\t"<<e3<<"\t\t\t"<<e4<<"\n";

    A = 1;
    e1 = (A && B && C);
    e2 = !B || !C;
    e3 = A && (!B || !C);
    e4 = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<e1<<"\t\t\t"<<e2<<"\t\t\t"<<e3<<"\t\t\t"<<e4<<"\n";

    A = 0; B = 1;
    e1 = (A && B && C);
    e2 = !B || !C;
    e3 = A && (!B || !C);
    e4 = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<e1<<"\t\t\t"<<e2<<"\t\t\t"<<e3<<"\t\t\t"<<e4<<"\n";

    B = 0; C = 1;
    e1 = (A && B && C);
    e2 = !B || !C;
    e3 = A && (!B || !C);
    e4 = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<e1<<"\t\t\t"<<e2<<"\t\t\t"<<e3<<"\t\t\t"<<e4<<"\n";

    A = 1; B = 1; C = 0;
    e1 = (A && B && C);
    e2 = !B || !C;
    e3 = A && (!B || !C);
    e4 = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<e1<<"\t\t\t"<<e2<<"\t\t\t"<<e3<<"\t\t\t"<<e4<<"\n";

    A = 0; C = 1;
    e1 = (A && B && C);
    e2 = !B || !C;
    e3 = A && (!B || !C);
    e4 = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<e1<<"\t\t\t"<<e2<<"\t\t\t"<<e3<<"\t\t\t"<<e4<<"\n";

    A = 1; B = 0;
    e1 = (A && B && C);
    e2 = !B || !C;
    e3 = A && (!B || !C);
    e4 = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<e1<<"\t\t\t"<<e2<<"\t\t\t"<<e3<<"\t\t\t"<<e4<<"\n";

    B = 1;
    e1 = (A && B && C);
    e2 = !B || !C;
    e3 = A && (!B || !C);
    e4 = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<e1<<"\t\t\t"<<e2<<"\t\t\t"<<e3<<"\t\t\t"<<e4<<"\n";

    return 0;
}
