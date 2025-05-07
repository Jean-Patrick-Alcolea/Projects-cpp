#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    float a,p,r;
    string unidades;
    unidades = "cm";
    const float pi = 3.14159;
    cout << "Escribe el radio de un circulo y te doy el area y perimetro " << endl;
    cin >> r;
    cin.get();
    a = pi*(r*r);
    p=2*r*pi;
    
    cout << "El area de un circulo de radio "<< r <<" " << unidades << " es: "<< a << endl;
    cout << "El perimietro de un circuldo de radio " << r <<" "<<unidades << " es: " << p << endl;
    cin.get();
    return 0;
}
