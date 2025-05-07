#include <iostream>
#include <string>
#include <iomanip>
/* Examen 3 */
using namespace std;
struct rec{
	string nom;
	float x1;
	float y1;
	float l;
	float a;
	float xc;
	float yc; 
}dat[5];

void indatos();
void resultado();
int main() {
	char op;
	
	cout << "\t\tEste programa calcula el centro de un rectangulo para 5 personas.\n\n";
	do{
		indatos();
		resultado();
		cout <<"\nDesea realizar la operacion de nuevo?\nS)\tSi\nN)\tNo" << endl;
		cin >> op;
	}while (op=='s'||op=='S');
	return 0;
}
void indatos(){	
	for(int i=0;i<5;i++){

	cout <<"Ingrese su nombre y apellido:";	
	getline(cin,dat[i].nom);
	cout << "Ingrese los puntos iniciales de su rectangulo y su tamaño.\nx1: ";
	cin >> dat[i].x1;
	if(dat[i].x1<0){
	dat[i].x1*=-1;
	}
	cout <<"y1: ";
	cin >> dat[i].y1;
	if(dat[i].y1<0){
	dat[i].y1*=-1;
	}	
	cout <<"Largo: ";
	cin >> dat[i].l;
	if(dat[i].l<0){
	dat[i].l*=-1;
	}
	cout <<"Ancho: ";

	cin >> dat[i].a;
	cin.clear();
	cin.ignore();
	
	if(dat[i].a<0){
	dat[i].a*=-1;
	}
	dat[i].xc=(dat[i].l/2)+dat[i].x1;
	dat[i].yc=(dat[i].a/2)+dat[i].y1;
	}
}


void resultado(){
	cout <<"\nNombre\t\t" << "v1(x1,y1)\t" << "Largo\t" <<  "Ancho\t" <<  "Centro(xc,yc)" << endl;
	for(int i=0;i<5;i++){
		cout <<dat[i].nom << setw(10) <<"(" << dat[i].x1 << "," << dat[i].y1 << ")" << setw(10) << dat[i].l << setw(10) << dat[i].a << setw(10) 
		<<"(" << dat[i].xc << "," << dat[i].yc << ")" << endl;
		
	}
}
