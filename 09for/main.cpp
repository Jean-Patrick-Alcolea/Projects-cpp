#include <iostream>

using namespace std;

int main() 
{
	
	float x,y,z;
	int i, j;
	char a;
do{
	
	//2presentar menu
	cout << "\n\n\tMenu\n\nElige una de las siguientes opciones:"
	<< "\n1)\tVer tablas de multiplicar del 1 al 5\n"
	<< "2)\tVer la tabla de multiplicar que desee del 1 al 10\n"
	<< "3)\tVer la tabla del numero que desee en el rango que desee \n";
// 3leer respuesta
cin >> a;
// 4 evaluo respuesta
switch (a)
	{
// 4a->si eligio el numero 1 presento las 5 primeras tablas
		case '1':
				for(i=1;i<=5;i++)
				{
					for(j=1;j<=10;j++)
					{
						cout << i << "X" << j << "=" << i*j << endl;
					}
					cout << endl;
				}
			break;
// 4b-> Si eligio el numero 2
		case '2':
	//4b1 preguntarle que tabla desea, leer respuesta
	cout << "\nIngrese por favor el numero del que desea ver su tabla\n";
	cin >> x;
	
	//4b2 imprimir la tabla del numero que desee (por num 1-10)
		for(i=1;i<=10;i++)
		cout << x << "X" << i << "=" << x*i << endl;
			break;
//4c ->Si eligio el numero 3
		case '3':
	//4c1 solicitar y almacenar el numero de la tabla que desea
	cout << "\nIngrese porfavor el numero del que desea ver su tabla\n";
	cin >> x;
	//4c2 Solicitar el minimo y macimo del rango a multiplicar
	cout << "\nIngrese el valor inicial para desplegar la tabla, y el final\n";
	cin >> y >> z;
	//4c3 imprimir la tabla
	cout << "\nTabla del: " << x << endl;
	
	for(i=y;i<=z;i++)
		cout << x << "X" << i << "=" << x*i << endl;
	
			break;
//4d -> Indico que no es opcion
		default:
			cout << "\nOpcion no valida";
			break;
	}
//5 pregunto si desea otra operacion

cout << "\n\nDesea realizar otra operacion?\n \t s) SI \n \t n) No" << endl;
//6 leer respuesta
cin >> a;
}
while(a=='s'|| a=='S');
//7 evaluo respuesta ->si regreso a paso 2 
//fin

	return 0;
}
