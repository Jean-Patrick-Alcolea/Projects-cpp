#include <iostream>
using namespace std;
/* Una tonelada m´etrica equivale a 35,273.92 onzas. Escriba un programa que 
lea el peso de un paquete de cereal para desayunos en onzas y que obtenga como
salida el peso en toneladas m´etricas as´i como el nuu´mero de cajas necesarias para llenar una tonalada m´etrica de cereal. */

//1.-Inicio
int main() {
	//2.-Inicializar variables
	float a,b;
	char rep;
	b=35273.92;
	//*Repeticion
	do{
	//3.-Pedirle al usuario el peso del cereal
	cout << "Ingrese el peso del cereal y devolvere las cajas necesarias para llenar una tonelada metrica" << endl;
	//4.-Leer el peso
	cin >> a;
	//5.-Dividir 1 tonelada entre el peso
	a=b/a;
	//6.-Imprimir el resultado
	cout << "Se necesitarian "<< a <<" cajas para llenar una tonelada metrica";
			cout << "\nQuieres repetir el programa? \ns) Si \nn) No\n";
	cin >>rep;
}while (rep=='s'||rep=='S');
	//7.-fin
	return 0;
}
