#include <iostream>
#include <string>
/* Este programa almacena y calcula el costo de vestidos o camisas */

using namespace std;
char o;
struct Camisas{
string nom;
int tela;
int botones;
float c[5];
bool st;
}u[5];
void menu();
void registroc();
void registrov();
void imprimirc();
void imprimirv();
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
	preg:cout << "Selecciona la opcion que desee " << "\na)\tRegistrar camisas" << "\nb)\tRegistrar vestidos" <<"\nc)\tVer camisas registradas" 
	<< "\nd)\tVer vestidos registrados" <<endl;
	cin >> o;
	if(o=='c'){
		if(u[0].st == false){
			cout << "\n\nNo se ha realizado algun registro\n"
			<<"\nPor favor seleccione opcion de registro" << endl;
			goto preg;
		}
	}
	switch (o){
			
			case 'a':
				registroc();
				break;
			case 'b':
				registrov();
				break;
			case 'c':
				imprimirc();
				break;
			case 'd':
				imprimirv();
				break;
			default:
				cout <<"\n\nOpcion invalida" << endl;
		
	}
}
void registroc(){
	int a;
	cout << "Ingrese por favor el numero de elementos a ingresar" << endl;
	cin >> a;
	for(int i=0;i<a;i++){
	cin.clear();
	cin.ignore();
	u[i].st= true;	
	cout << "Ingrese nombre de la camisa " << i+1 << endl;

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
void imprimirc(){
	
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
