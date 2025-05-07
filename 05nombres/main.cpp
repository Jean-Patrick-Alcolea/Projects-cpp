#include <cstdlib>
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{string n1,n2,n3;
int e1,e2,e3;
char s1,s2,s3;

    cout << "Introduce el primer nombre, edad y sexo" << endl;
    cin >> n1 >> e1 >> s1;
    cout << "Introduce el segundo nombre, edad y sexo" << endl;
    cin >> n2 >> e2 >> s2;
    cout << "Introduce el tercer nombre, edad y sexo" << endl;
    cin >> n3 >> e3 >> s3;




cout << " Valores registrados" << endl;
cout <<setw(10)<< "Nombre \t" << "Edad \t " << "Sexo " << endl;
    cout << setw(10)<<n1; 
    cout << "\t "<<e1;
    cout << "\t "<<s1 << endl;
    cout << setw(10)<< n2 ;
    cout << "\t "<<e2 ;
    cout << "\t "<<s2<< endl; 
    cout << setw(10)<< n3 ;
    cout << "\t " <<e3 ;
    cout << "\t "<<s3 << endl;       
    cin.get();
    cin.get();
    return 0;
}
