#include <iostream>

/* Imprime una pir´amide de la forma... */
using namespace std;

//1.-inicio
int main() {
	//2.-Inicializar variables
	int a, i, j;
	char rep;
	//*Repeticion
	do{
	//3.-Pedirle al usuario el numero de filas que quiera siempre y cuando sea menor a 15 y leerlo
	cout <<"Ingrese el numero de filas para la piramide (El numero no puede ser mayor a 15): " ;
	cin >> a;
	//4.-Evaluar si el numero es menor a 15
	if(a<=15)
	//4a.1.-Iniciar repeticion
	{for(i=1;i<=a;i++)
		{for(j=1;j<=i;j++)
		{
			//4a.1a.-Imprimir piramide
			cout << j << " " ;
		}
		cout << endl;
	}
	}
	//4b.- Informar que el numero es mayor a 15
	else
	cout <<"El numero no puede ser mayor a 15";
			cout << "\nQuieres repetir el programa? \ns) Si \nn) No\n";
	cin >>rep;
}while (rep=='s'||rep=='S');
	//5.-fin
	
	return 0;
}
