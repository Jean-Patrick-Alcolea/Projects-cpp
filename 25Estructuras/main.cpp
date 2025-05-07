#include <iostream>
#include <string>
/* Escribe un programa que almacene nombre, numero de materias, y calificaciones 
obtenidas en cada materia (max 5) para cada estudiante de un grupo de 5 
emplee estructuras para el registro.
El programa debe permitir que el usuario vea todos los valores registrados */

using namespace std;
char o;
struct e{
string nom;
int nmat;
float c[5];
bool st;
}u[5];
void menu();
void registro();
void imprimir();
void inicial();
int main() {
	inicial();
	
	do{
		menu();
		cout << "Desea regresar al menu principal? s/n " << endl;
		cin >> o;		
	}while(o=='s');
	return 0;
}
void menu(){
	preg:cout << "Selecciona la opcion que desee " << "\na)\tRegistrar estudiantes" << "\nb)\tVer estudiantes registrados" << endl;
	cin >> o;
	if(o=='b'){
		if(u[0].st == false){
			cout << "\n\nNo se ha realizado algun registro\n"
			<<"\nPor favor seleccione opcion de registro" << endl;
			goto preg;
		}
	}
	switch (o){
			
			case 'a':
				registro();
				break;
			case 'b':
				imprimir();
				break;
			default:
				cout <<"\n\nOpcion invalida" << endl;
		
	}
}
void registro(){
	
	for(int i=0;i<5;i++){
	cin.clear();
	cin.ignore();
	u[i].st= true;	
	cout << "Ingrese nombre del usuario " << i+1 << endl;

	getline(cin,u[i].nom);
	cout << "Ingrese por favor le numero de materias que curso este periodo" << endl;
	cin >> u[i].nmat;
	if(u[i].nmat<=5){
	for(int j=0;j< u[i].nmat;j++){
		cout << "Ingrese por favor la calificacion en la " << j+1 << " materia" << endl;
		cin >> u[i].c[j];
	}
}
	else{
	cout << "Opcion no valida" << endl;
	i--;
}
}
}
void imprimir(){
	
	cout << "\n\n\tEstudiantes registrados\n\nNombre\t\t\tCalificaciones" << endl;
	for(int i=0;i<5;i++){
		cout << u[i].nom << "\t\t";
		for(int j=0;j<u[i].nmat;j++){
			cout << u[i].c[j] << "  ";
		
		}	cout << endl;
	}
}
void inicial(){
	for(int i=0;i<5;i++)
	u[i].st =false;
}
