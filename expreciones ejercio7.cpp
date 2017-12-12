/*7. la calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un 60% 
y la nota de participacion que cuenta el 10% restante. Escriba un programa que lea de la entra estandar las tres notas
de un alumno y escriba en la solida estandar su nota final */

#include<iostream>

using namespace std;

int main(){
	
	float practica, teorica, participacion, final =0;
	
	cout<<"Digite la nota de practica: "; cin>>practica;
	cout<<"Digite la nota de teorica"; cin>>teorica;
	cout<<"Digite la nota de  participacion: "; cin>>participacion;
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *=0.10;
	
	final = practica + teorica + participacion;
	
	
	cout<<"\nLA nota final es: "<<final;
	
	
	
	return 0;
}

