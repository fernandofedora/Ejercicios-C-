/* Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo
y escriba en lasalida estandar su hipotenusa */

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, hipotenusa=0;
	
	cout<<"Digite la longitud del cateto a: "; cin>>a;
	cout<<"Digite la longitud del cateto b: "; cin>>b;
//	cout<<"Digite el valir de c: "; cin>>c;
//	cout<<"Digite el valir de d: "; cin>>d;

//	cout<<"Digite el valir de a: "; cin>>a;

hipotenusa = ((a)*2) + ((b)*2);
cout.precision(2);

cout<<"\nLa hipotenusa es: "<<hipotenusa<<endl;
	
	
	return 0;
}
