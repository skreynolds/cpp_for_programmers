/*Goal: Practice array manipulation in C++.
**The user will input 40 integers.
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order
**and print it.
**The each print of the array should separate the numbers in the array by
**one space.
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[5];
    int temp;

    for (int i = 0; i < 5; i++)
    {
    	std::cout<<"Enter an integer to store in the array: ";
    	std::cin>>temp;
    	userInput[i] = temp;
    }

    for (int i = 0; i < 5; i++){
    	std::cout<<userInput[i]<<" ";
    }

    std::cout<<"\n";

    for (int i = 4; i >= 0; i--){
    	std::cout<<userInput[i]<<" ";
    }

    for (int i = 0; i < 5; i++){
    	int swap_idx = i;

    	for (int j = i; j < 5; j++){
    		if (userInput[j] < userInput[swap_idx]){
    			swap_idx = j;
    		}
    	}

    	int temp = userInput[i];
    	userInput[i] = userInput[swap_idx];
    	userInput[swap_idx] = temp;
    }

    std::cout<<"\n";

    for (int i = 0; i < 5; i++){
    	std::cout<<userInput[i]<<" ";
    }

    return 0;
}
