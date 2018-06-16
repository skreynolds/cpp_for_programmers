/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/

#include<iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4.
    //Print the resultant product vector

	int array[4][4];
	int vect[4];
	int result[4];
	int sum;

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			std::cout<<"Enter array value: ";
			std::cin>>array[i][j];
		}
	}

	for (int i = 0; i < 4; i++){
		std::cout<<"Enter vector value: ";
		std::cin>>vect[i];
	}

	for (int i = 0; i < 4; i++){
		sum = 0;
		for (int j = 0; j < 4; j++){
			sum += array[i][j]*vect[j];
		}
		result[i] = sum;
	}

	for (int i = 0; i < 4; i++){
		std::cout<<result[i]<<" ";
	}

    return 0;
}
