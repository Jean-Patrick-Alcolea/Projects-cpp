#include <iostream>
using namespace std;
/* Calcule el valor absoluto de un nu´mero real. */

//1.-Inicio
int main() {
	//2.-Inicializar variable
	float a;
	char rep;
	//*Repeticion
	do{
	//3.-Pedir al usuario ingresar un numero
	cout << "Ingresa un numero y te devolvere su valor absoluto" << endl;
	//4.-Leer el numero
	cin >> a;
	//5.-Evaluar si el numero es positivo o negativo
	if(a<0)
	//5.1.-Cambiar el signo si es negativo
	a*=-1;
	//6.-Imprimir el resultado
	cout << "El valor absoluto del numero es: " << a;
		cout << "\nQuieres repetir el programa? \ns) Si \nn) No\n";
	cin >>rep;
}while (rep=='s'||rep=='S');
	//7.-fin
	return 0;
}
