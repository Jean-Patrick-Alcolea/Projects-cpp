#include <cstdlib>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{char op;
float a,b,c,d;
    cout << "Quieres calcular una raiz? (s/n): ";
    cin >> op;
    op = tolower(op);
    if(op=='s')
    {
        cout << "Ingresa los valores de a, b, y c" << endl;
        cin >> a >> b >> c;
        d= (b*b)-(4*a*c);
        if(d<0)
        cout <<"raices imaginarias" << endl;
        else if(d==0)
        cout <<"raices reales iguales";
        else
        cout << "raices reales diferentes";
    }
    
    
    else
    {
      cout << "chale";  
    }
    
    cin.get();
    cin.get();
    return 0;
}
