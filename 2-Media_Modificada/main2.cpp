#include <iostream>
using std::cin;
using std::cout;
using std::endl; 
using std::atoi; 

#include "media2_3.h"


int main(int argc, char *argv[])
{

	int n1, n2, n3; 
	//float media_1; 

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	n3 = atoi(argv[3]);

	cout << "Os números são: " << n1 
		 <<" "<< n2 
		 <<" "<< n3 << endl;
	
	cout << "A media entre esses números: " 
		 << media(n1, n2, n3) << endl;




	return 0; 

}

