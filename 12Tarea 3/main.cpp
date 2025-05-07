#include <iostream>
#include <math.h>
using namespace std;
/* Calcule el valor de ex, para el valor (x) que el usuario desee.... */
//1.-Inicio
int main() {
	//2.-Inicializar variables
	float x, num, i, e, den, j;
	char rep;
	//*Repetir
	do{
	//3.-pedir el valor de la portencia y leerlo
	cout << "Ingrese el valor x deseado y regreso el valor e a esa potencia: ";
	cin >> x;
	num=1;
	den=1;
	e=0;
	//4.-Iniciar repeticion
	for(i=0;i<10;i++)
{
	//4.1.-Primer valor es 1
		if(i==0)
	{
			e=1;
			cout << e << " + ";
	}
	//4.2.-Obtener los demas valores
		else
		{
		num*=x;
		den=1;
		for (j=1;j<=i;j++){
			den*=j;
		}
		//4.3.-Imprimir los valores
			if(i!=9)
				cout << num << "/" << den << " + ";

		else
			cout << num << "/" << den << " = ";
}
		//4.4.-obtener resultado
		e+=num/den;
	}
		//5.-Imprimir resultado
		cout << e-1;
		
			cout << "\nQuieres repetir el programa? \ns) Si \nn) No\n";
	cin >>rep;
}while (rep=='s'||rep=='S');
//6.-fin
	cin.get();
	return 0;
}
