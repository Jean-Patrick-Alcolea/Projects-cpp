#include <iostream>
using namespace std;
/* Escribe los elementos de la serie 7,11,15,19 ... menores a 250. */
//1.-Inicio
int main() {
	//2.-Inicializar variables
	int i;
	char rep;
	do{
	//3.-Inicializar repeticion
	for(i=7;i<250;i=i+4)
	//3.1.-imprimir numero
	{cout<<i<<", ";
	}
			cout << "\nQuieres repetir el programa? \ns) Si \nn) No\n";
	cin >>rep;
}while (rep=='s'||rep=='S');
	//fin	
	return 0;
}
