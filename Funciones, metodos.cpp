#include <iostream>
using namespace std;
// metodos y funciones = ejecutan una porcion segun N cantidad de veces segun se mande a llamar
// metodo = nor retorna un valor
// funcion = retorna un tipo de dato determinado

// 80 lineas de codigo en 10 lugares distintos = 800 lineas de codigo
// de las cuales 80 son iguales
// crean una funcion o un metodo = y manda a llamar 10 veces = 80 lineas de codigo y 10 llamadas a funciones

//funciones que sume dos vales
/*int suma(int num1,int num2){
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
}
int resta(int num1,int num2){
	int resultado = 0;
	resultado = num1-num2;
	return resultado;
}
*/

/*int suma(int num1,int num2){
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
}
int suma(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}
*/

//funcion que sume dos valores

int suma(int num1,int num2,int num3);
void suma(int &num1,int &num2);

main() {
	int a=10,b=20;	
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
	system("pause");
}	
	
	
	int suma(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}
//metodo y envio de parametros por referencia
void suma(int &num1,int &num2){
	int resultado = 0;
	num1+=1; //a cada dato se le suma 1
	num2+=1; // a cada dato le suma 1
	resultado = num1+num2; //32
	cout<<resultado<<endl;
}
/*	cout<<suma(10,20)<<endl;
	cout<<suma(50,70)<<endl;
	cout<<suma(90,10)<<endl;
*/	
	
/*	cout<<suma(10,20,20)<<endl;
*/		




