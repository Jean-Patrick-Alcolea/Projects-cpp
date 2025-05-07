#include <iostream>

using namespace std;
/* Calcule la edad promedio de un grupo de deportistas, reportando resultados segun el g´enero (M ´o F). */


//1.-inicio
int main() {
	//2.-Inicializar variables
	int i,j,k,m,f,M,F;
	char a, rep;
	do{
	f=0;
	m=0;
	M=0;
	F=0;

	//3.-Preguntar al usuario el numero de deportistas que desea ingresar
	cout << "Cuantos deportistas desea ingresar" << endl;
	//4.-Leer el numero de deportistas
	cin >> j;
	//5.-Iniciar repeticion 
		for(i=0;i<j;i++)
		{
			//5.1.-Preguntar el sexo y edad del deportista
			cout <<"Ingresa la edad y el sexo del deportista\nEdad: ";
			cin >> k;
			cout << "Sexo: ";
			cin >> a;
			//5.2.-Evaluar el sexo del deportista y sumar la edad segun este
			if(a=='m'||a=='M')
			{
				m+=k;
				M++;
			}
			else if (a=='f'||a=='F')
			{
				f+=k;
				F++;
			}
			else
			{
			cout << "Ingresa un sexo valido"<< endl;
			i--;
			}
		}
//6.- Imprimir resultados	
if(M>0)
cout <<"La edad promedio de los deportistas masculinos es: " << m/M << endl;
if(F>0)
cout << "La edad promedio de las deportistas femeninas es: " << f/F << endl;
//6a.-repetir?
cout <<"Quieres repetir la operacion \n s) Si \n n) No" << endl;
cin  >> rep;
}
while(rep=='s'||rep=='S');
//7.-Fin	
	return 0;
}
