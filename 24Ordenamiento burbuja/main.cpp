#include <iostream>
#define tma 50
using namespace std;
/* Ordena numeros */


int main() {
	float m[tma]={18.2,21.2,23.1,18.5,15.6,20.8,19.4,15.4,21.2,13.4,16.4,18.7,18.2,19.6,14.3,16.6,24.0,17.6,17.8,20.2,17.4,23.6,17.5,20.3,16.6,19.3,18.5,19.3,21.2,13.9,20.5,19.0,17.6,22.3,18.4,21.2,20.4,21.4,20.3,20.1,19.6,20.6,14.8,19.7,20.5,18.0,20.8,15.8,21.1,17.0};
	cout << "Primer arreglo \n\n" << endl;
	for (int i=0;i<tma;i++){
		cout << m[i] << " , ";
	}
	cout << "Ordenamiento de numeros" << endl;
	for (int j=0;j<tma-2;j++){
	for (int i=0;i<tma-1;i++){
		cout << "\nComparando posiciones: " << i+1 << " y " << i+2 << endl;
		if(m[i]<m[i+1]){
			int t;
			t=m[i+1];
			m[i+1]=m[i];
			m[i]=t;
		}
		for (int i=0;i<tma;i++){
		cout << m[i] << " , ";
	}
	}
	cout << "\n-----------------------------" << endl;
}	
	return 0;
}
