#include <cstdlib>
#include <iostream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{int a, b, c;
char op;
    cout << "Introduce el primer numero de tu operacion" << endl;
    cin >> a;
    cout << "Quieres (A)sumar, (B) restar, (C) multiplicar, o (D) dividir." << endl;
    cin >> op;
    op = toupper(op);
    switch(op)
    {
        case 'A':
            cout << "Introduce el segundo numero de tu operacion" << endl;
            cin >>b;
            c=a+b;
            cout << "El resultado es " << c;
            break;
        case 'B':
            cout << "Introduce el segundo numero de tu operacion" << endl;
            cin >>b;
            c=a-b;
            cout << "El resultado es " << c;
            break;         
        case 'C':
            cout << "Introduce el segundo numero de tu operacion" << endl;
            cin >>b;
            c=a*b;
            cout << "El resultado es " << c;
            break;
        case 'D':
            cout << "Introduce el segundo numero de tu operacion" << endl;
            cin >>b;
            c=a/b;
            cout << "El resultado es " << c;
            break;
        default:
            cout << "Opcion no valida";
        
        
    }
    cin.get();
    cin.get();
    return 0;
}
