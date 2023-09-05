#include <iostream>
using std::cin;
using std::cout;
using std::endl; 
using std::atoi; 

#include "media3_3.h"

int main(int argc, char *argv[])
{

	int n = 0, contador, quantidade, valor = 2; 
	float media_1; 

	quantidade = atoi(argv[1]); 

	for(contador = 0; contador < quantidade; contador++)
	{
		n = n + atoi(argv[valor++]); 
		
	}
	
	
	cout << "A media entre esses números: " 
		 << media(n, quantidade) << endl;




	return 0; 

}

