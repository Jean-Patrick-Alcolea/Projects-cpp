#include <iostream>

/* Examen 2*/
struct sf{
	int num1;
	int num2;
	int den1;
	int den2;
	int numr;
	int denr;
}a;
void menu();
void operacion();
using namespace std;
int main() {
	char op;
	do{
		menu();
		cout << "\nDesea realizar otra operacion?\nS)\tSi\nN)\tNo" << endl;
		cin >> op;
	}while(op=='s'||op=='S');
	
	return 0;
}
void menu(){
	cout <<"\t\tEste programa calcula la suma de dos fracciones.\n\n" << endl;
	cout <<"Ingrese el numerador de la primera fraccion: ";
	cin >>a.num1;
	cout <<"\nIngrese el denominador de la primera fracccion: ";
	cin >> a.den1;
	cout <<"\nIngrese el numerador de la segunda fraccion: ";
	cin >> a.num2;
	cout << "\nIngrese el denominador de la segunda fraccion: ";
	cin >> a.den2;
	operacion();
}
void operacion(){
	if(a.den1==a.den2){
		a.numr=a.num1+a.num2;
		a.denr=a.den1;
		cout <<"El resultado es: " << a.numr << "/" << a.denr << endl;
	}
	else{
		a.numr=(a.num1*a.den2)+(a.num2*a.den1);
		a.denr=a.den1*a.den2;
		cout << "El resultado es: " << a.numr << "/" << a.denr << endl;
		
	}
}


