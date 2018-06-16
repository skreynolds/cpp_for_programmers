/*Goal: practice writing functions with parameters and return values.*/

#include "main.hpp"

int main(void){

	int m1 = 2;
	int m2 = 3;
	int result = sum(m1,m2);

	printEquation(m1, m2, result, '+');

	return 0;
}
