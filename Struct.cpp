#include <iostream>
using namespace std;
//estructuras struct (una forma de agrupar varias variables relacionadas en un solo lugar.)
struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
	
	
};
main() {
/*	Estudiante alumno;
	for (int i=0;i<2;i++){
		cout<<"_____________________"<<endl;
		cout<<"Ingrese Codigo: ";
	cin>>alumno.codigo[i];
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,alumno.nombre[i]);
	cout<<"Ingrese Nota: ";
	cin>>alumno.nota[i];
	}
	for (int i=0;i<2;i++){
}
*/
/*	cout<<"Ingrese Codigo: ";
	cin>>alumno.codigo;
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,alumno.nombre);
	cout<<"Ingrese Nota: ";
	cin>>alumno.nota;
*/	
/*	for (int i=0;i<2;i++){
	cout<<"_____________________"<<endl;
	cout<<"Codigo: "<<alumno.codigo[i]<<endl;
	cout<<"Nombre Completo: "<<alumno.nombre[i]<<endl;
	cout<<"Nota: "<<alumno.nota[i]<<endl;
	}
*/
	Estudiante estudiante;
	
	int fila = 0, columna = 0;
	cout<<"Cuantos Estudiantes desea Agregar: ";
	cin>>fila;
	
	cout<<"Cuantas notas por estudiante desea agregar: ";
	cin>>columna;
	
	estudiante.codigo = new int [fila];
	estudiante.nombre = new string [fila];
	estudiante.notas = new int *[fila];
	for (int i=0;i<fila;i++){
		estudiante.notas[i] = new int[columna];
	}
	cout<<"__________________________Ingreso de Notas__________________________"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota ["<<ii<<"] :";
			cin>>*(*(estudiante.notas+i)+ii);
			
	}
	cout<<"_________________________________________"<<endl;
}
	cout<<"____________Mostrar datos____________";
	for (int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota ["<<ii<<"] :"<<*(*(estudiante.notas+i)+ii)<<endl;
			
	}
	cout<<"_________________________________________"<<endl;
}

	for (int i=0;i<fila;i++){
		delete[] estudiante.notas[i] ;
}
	delete[] estudiante.codigo ;
	delete[] estudiante.nombre ;
	delete[] estudiante.notas ;
	
}
