#include <iostream>
#include <iomanip>

int main(){
	int a =45;
	float b = 45.323;
	double c = 45.5468;
	int aa = a + 9;
	float bb = b + 9;
	double cc = c + 9;
	int aaa = aa + 9;
	float bbb = bb + 9;
	double ccc = cc + 9;

	std::cout<<"Ints"<<std::setw(10)<<
			"Floats"<<std::setw(10)<<
			"Doubles"<<std::setw(10)<< "\n";
	std::cout<< a<< std::setw(10)<<
			b<< std::setw(10)<<
			c<< std::setw(10)<< "\n";
	std::cout<< aa<< std::setw(10)<<
			bb<< std::setw(10)<<
			cc<< std::setw(10)<< "\n";
	std::cout<< aaa<< std::setw(10)<<
			bbb<< std::setw(10)<<
			ccc<< std::setw(10)<< "\n";
	return 0;
}
