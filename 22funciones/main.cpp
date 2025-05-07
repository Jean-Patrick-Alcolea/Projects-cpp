#include <iostream>
#include <math.h>
using namespace std;
double x;
/*Escribe un programa que permita al usuario realizar la expansion en serie de la funcion sin x
El usuario debe poder decidir si ve los primeros 4 terminos o mas
El programa debe imprimir los terminos que se elijan
El programa debe repetirse las veces que sean necesarias, antes de terminar su ejecucion.
Emplee funciones al programar*/

char inicio();
void menu();
double taylorsin(int n=4);
int main() {
	char r;
	do{
		r=inicio();
	}while (r=='1');
	return 0;
}


char inicio(){
	char o;
	int t;
	menu();
	cin >> o;
	cout << "Ingrese el valor de x (en radianes)" << endl;
	cin >> x;
	switch(o){
			case '1':
				taylorsin();				
			break;
			case '2':
				cout << "Ingrese el numero de terminos que desee ver: ";
				cin >> t;
				taylorsin (t);
			break;
			case '3':
			break;
	}
	cout << "\nDesea realizar otra operacion?: \n1)Si \t2)No" << endl;
	cin >> o;
	return o;
}
void menu(){
	cout << "\nBienvenido\n\nEste programa te permite ver los terminos de la expansion en serie de taylor para la funcion\n\t\t"
	<< "sin(x)\n\nElige la opcion que desee: \n1)Ver cuatro terminos de la expansion\n2)Ver mas de cuatro terminos" << endl;
}
double taylorsin(int n){
	int i,j;
	double s=0,num=1,d=1;
	for (i=0;i<n;i++){
	num=pow(-1,i)*pow(x,(2*i-1));
	cout << num << "/";
	for(j=0;j<i;j++){
	d=d*(2*j+1);
	}
	cout << d << " + ";
	s=num/d;
	}
	return s;	
}
