/*Dados tres valores num´ericos, determine el mayor de los tres. Considere el caso en el que se proporcionen dos o m´as nu´meros iguales.*/
#include <iostream>

using namespace std;
//1.-Inicio
int main()
//2.-Inicializar variables
{   int a, b, c;
char rep;
//*Repeticion
do{
//3.-Pedirle al usuario los numeros y leerlos
    cout << "Este programa ordena 3 numeros enteros de mayor a menor." << endl;
    cout << "Escribe el primer numero: ";
    cin >> a;
    cout << "Escribe el segundo numero: ";
    cin >> b;
    cout << "Escribe el tercer numero: ";
    cin >> c;
    //4a.-Evaluar si el primer numero es mayor al segundo
    if (a>=b)
    {
    	//4.1.-Evaluar si el primer numero es mayor al tercero y segundo
        if(a>=c)
        //4.2.-Evaluar si el segundo numero es mayor al tercero
    {   if (b>=c)
    //4.3a.-Imprimir resultados
        cout << a << " " << b << " " << c;
        //4.3b.-Imprimir resultados
        else if (b<=c)
        cout << a << " " << c << " " << b;        
    }
    //4b.-Evaluar si el tercer numero es el mayor
        else if (a<=c)
        //4.b.-Imprimir resultados
        cout << c << " " << a << " " << b;
         
    }   
    //4c.-Evaluar si el primer numero es mayor al tercero y menor al segundo
        else if (a>=c)
    {
    	//4c1.-Evaluar si el segundo numero es mayor al tercero
        if (b>=c)
        //4c2.-Imprimir resultados
        cout << b << " " << a << " " << c; 
    }
    //4d.-Evaluar si el segundo numero es mayor al segundo y el primero
        else if(b>=c)   
        //4d1.-Imprimir resultado
        cout << b << " " << c << " " << a;
        //4e.-Imprimir ultimo caso
        else
        cout << c << " " << b << " " << a;
				cout << "\nQuieres repetir el programa? \ns) Si \nn) No\n";
	cin >>rep;
}while (rep=='s'||rep=='S');
    //5.-fin
    cin.get();
    return 0;
}
