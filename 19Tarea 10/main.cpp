#include <iostream>
#include <math.h>
using namespace std;
/* Calcule los primeros 10 nu´meros de la sucesi´on */
//1.-Inicio
int main() {
	
	//2.-Inicializar variable
	float e = 1;
	char rep;
	//*Repeticion
	do{
	//3.-Iniciar repeticion
	cout << "Aproximacion de la constante e\n";
	for(int i=1; i <= 10;i++)
	{//4.-obtener valores
		float t = (1 + (1 /float(i)));
		for(int j =1; j <=i ; j++)
		{
			e*=t;
		}
		//5.-imprimir valores
		cout << "e = " << e << endl;
		e=1;
	}
			cout << "\nQuieres repetir el programa? \ns) Si \nn) No\n";
	cin >>rep;
}while (rep=='s'||rep=='S');
//6.-fin
	return 0;
}
