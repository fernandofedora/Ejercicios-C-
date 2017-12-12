/* escriba un programa que lea la nota 
final de cuatro alumnos y calcule la nota final media de los cutaro alumanos*/

#include<iostream>

using namespace std;

int main(){
	int x,y,z,w, resultado = 0;
	
	cout<<"Digite la nota del A1: "; cin>>x;
	cout<<"Digite la nota de A2: "; cin>>y;
	cout<<"Digite la nota de A3: "; cin>>z;
	cout<<"Digite la nota de A4: "; cin>>w;
	
	resultado = (x+y+z+w)/4;
	
	cout<<"resultados: "<<resultado<<endl; 
	
	
	
	return 0;
	
	
}
