#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

struct a{
	string nom;
	int e;
}es[10];

int main() {
	int i=0;
	char o;
	do{
	
		cout << "Ingrese su nombre por favor:";
		cin >> es[i].nom;	
		cout << "Ingrese su edad por favor:";
		cin >> es[i].e;
	ofstream fes;
	fes.open("registros_01.txt",ios::app);
	fes << es[i].nom << "\t" << es[i].e << endl;
	fes.close();	
	cout << "\nSi desea realizar otro registro pulse 1" << endl;
	cin >> o;	
	i++;
	}while(o=='1');
	string t;
	ifstream f2;
	f2.open("registros_01.txt");
	if(f2.fail()){
		cout << "\nEl archivo no existe\n";
		cin.get();
		exit(1);
	}
	while(!f2.eof()){
		getline(f2,t);
		cout << t << endl;
	}
	
	f2.close();

	cin.get();
	return 0;
}
