#include <iostream>
using namespace std;
//estructuras struct (una forma de agrupar varias variables relacionadas en un solo lugar.)
struct Estudiante{
	int codigo;
	string nombre;
	int nota;
	
	
};
main() {
	Estudiante alumno;
	cout<<"Ingrese Codigo: ";
	cin>>alumno.codigo;
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,alumno.nombre);
	cout<<"Ingrese Nota: ";
	cin>>alumno.nota;
	
	cout<<"Codigo: "<<alumno.codigo<<endl;
	cout<<"Nombre Completo: "<<alumno.nombre<<endl;
	cout<<"Nota: "<<alumno.nota<<endl;
	
}
