#include <iostream>
#include <string>

using namespace std;
/* Escribe un programa que érmita registrar las calificaciones de 4 dif. personas, de 3 materias, calcule la calificacion promedio alcanzada por persona y por materia
como resultado debe imprimirse una tabla con los valores registrados y calculados */

int main() {
float a[4][3]={0};
string nombres[4];
string materias[3]={"ProgEst", "Metodos", "Promedio"};
int i, j ;
float pm[2]={0};

for(i=0;i<4;i++){
	cout <<"Ingrese el nombre del alumno "<< i+1 << endl;
	getline(cin,nombres[i]);	
}

cout <<"\n\n\nRegistros\n";
for(i=0;i<=3;i++){
	cout << "Alumno " << i+1 <<" :\t " <<nombres[i] << endl;
	for(j=0;j<=1;j++){
		cout <<"Ingresa la calificacion obtenida en " << materias[j] << ": ";
		cin >> a[i][j];		
		a[i][2]+=a[i][j];
		pm[j]+=a[i][j];
	}
cin.clear();
cin.ignore();
}
for(i=0;i<4;i++){
	a[i][2]/= 2;
	if(i<=1)pm[i]/=4;
	
}
for(i=0;i<5;i++){
	for(j=0;j<4;j++){
		
	}
}

cin.get();
	return 0;
}
