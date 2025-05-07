#include <iostream>
using namespace std;
/*Calcular factoriales */
long double fact(long double n);
int main() {
long double n;
	cout << "Ingresa un numero y te regreso el factorial de ese numero" << endl;
	cin >> n;
	if(n<0){
		n*=-1;
	}
	else if (n==0){
		n++;
	}
	fact(n);
	cout << fact(n);
	return 0;
}
long double fact(long double n){
	if(n!=1)
	return(n*fact(n-1));
	else
	return 1;
}
