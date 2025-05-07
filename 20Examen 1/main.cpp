#include <iostream>
#include <math.h>
using namespace std;
/* Examen 3 */
//1.-Inicio
int main() {
	//2.-Declarar variables e inicializarlar
float f, c, i;
f=0;
c=0;
char op;
char rep;
cout << "\tPROGRAMA PARA REALIZAR CONVERSIONES ENTRE FARENHEIT Y CELSIUS\n\n\n";
//3.-Iniciar repeticion
do{
	//4.-Imprimir las opciones
	cout << "Elija una opcion:\na)Convertir °C a °F\nb)Convertir °F a °C"<< endl;
	cin >> op;
	//5.-Leer la opcion y evaluarla
	switch (op){
		
		case 'a':
			{//5a.1.-Pedirle al usuario la temperatura en celcius a convertir y leerla
				cout << "Ingrese temperatura en °C:";
				cin >> c;
				//5a.2.- Imprimir el titulo de la tabla
				cout << "°C\t°F\n";
				//5a.3.- Comenzar repeticion para imprimir resultados
				for(i=-1;i<=1;i++){
					//5a.4.-evaluar si es el caso i=0
					if(i!=0){
						//5a.5.-Sumarle la iteracion, realizar la convercion e imprimir resultados
					c+=i;
				f=(1.8*c)+32;
				cout << c << "\t" << f << endl;
				c++;
			}			//5a.5.-Realizar la conversion e imprimir resultado
					else{
					f=(1.8*c)+32;
					cout << c << "\t" << f << endl;
				}
			}
		}
		break;
		case 'b':
						{//5b.1.-Pedirle al usuario la temperatura en farenheit a convertir y leerla
				cout << "Ingrese temperatura en °F:";
				cin >> f;
				//5b.2.- Imprimir el titulo de la tabla
				cout << "°F\t°C\n";
				//5b.3.- Comenzar repeticion para imprimir resultados
				for(i=-1;i<=1;i++){
					//5b.4.-evaluar si es el caso i=0
					if(i!=0){
						//5b.5.-Sumarle la iteracion, realizar la convercion e imprimir resultados
					f+=i;
				c=(f-32)/1.8;
				cout << f << "\t" << c << endl;
				f++;
			}//5b.5.-Realizar la conversion e imprimir resultado
					else{
					c=(f-32)/1.8;
					cout << f << "\t" << c << endl;
				}
			}
		}
		break;

		
		
			}
	//6.-Preguntar al usuario si quiere realizar otra operacion
	cout << "Quieres realizar otra operacion\nS) Si\nN) No\n";
	cin >>rep;
}while(rep=='s'||rep=='S');
//7.-Fin
	return 0;
}
