 #include <iostream>
using std::cin;
using std::cout;
using std::endl; 

#include "media_3.h"


int main(int argc, char *argv[])
{

	int n1, n2, n3; 
	float media_1; 

	cout << "Digite o primeiro valor: " << endl; 
	cin >> n1; 

	cout << "Digite o segundo valor: " << endl; 
	cin >> n2; 

	cout << "Digite o terceiro valor: " << endl; 
	cin >> n3; 

	media_1 = media(n1, n2, n3); 

	cout << "Valor da media e: " << media_1 << endl;  


	return 0; 

}

