#include <iostream>
#include <math.h>
using namespace std;
/* Un triangulo rectangulo puede tener lados que sean todos enteros. 
El conjunto de ´estos se conoce como terna pitag´orica. Estos tres lados 
deben satisfacer la relaci´on que indica que la suma de los cuadrados de dos de sus 
catetos debe ser igual al cuadrado de la hipotenusa. Encuentre todas las ternas de Pit´agoras
 para los tri´angulos con hipotenusa de longitud no mayor a 100 unidades*/

//1.-Inicio
int main() {
	//2.-Inicializar variables
	int a,b,c,i,j,min,max;
	char rep;
	//*Repeticion
	do{
	//3.-pedir valores minimos y maximos
	cout << "Ingresa el intervalo que deseas evaluar (que no sobrepase 100)\nvalor minimo: ";
	cin >>min;
	cout << "\nvalor maximo: ";
	cin >> max;
	//*Evaluar intervalo
	if(max<=100){
	//4.-Inciar repeticion
	for(c=min+2;c<=max;c++){
		for(b=min+1;b<c;b++){
			for(a=min;a<b;a++){
				i=(pow(a,2))+(pow(b,2));
				j=pow(c,2);
				if(j==i)
				cout <<"\nla terna: " << a << " + " << b << " = " << c << " es pitagorica" << endl;
			}
		}
	}
}
else
cout << "El valor maximo no puede ser mayor a 100\n";
	cout << "Quieres repetir el programa? \ns) Si \nn) No\n";
	cin >>rep;
}while (rep=='s'||rep=='S');
	//5.-fin
	return 0;
}
