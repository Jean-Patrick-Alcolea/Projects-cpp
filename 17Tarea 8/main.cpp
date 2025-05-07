#include <iostream>
using namespace std;
/* Imprime la cuenta regresiva del 40 al 0, avanzando de 5 en 5 desde el 40 hasta el 10, y de 1 en 1 los u´ltimos 10 nu´meros. */

//1.-Inicio
int main() {
	//2.-inicializar variables
	int i;
	char rep;
	//*Repeticion
	do{
	//3.-Iniciar repeticion hasta 10
				for(i=40;i>10;i=i-5)
	{
		//3.1.-Imprimir cuenta
		cout <<i<<", ";
	}
	//4.-Iniciar repeticion hasta 0
		for(i=10;i>=0;i--)
	{
		//4.2.-Imprimir cuenta
		cout <<i<<", ";
	}
			cout << "\nQuieres repetir el programa? \ns) Si \nn) No\n";
	cin >>rep;
}while (rep=='s'||rep=='S');
//5.-fin	
	return 0;
}
