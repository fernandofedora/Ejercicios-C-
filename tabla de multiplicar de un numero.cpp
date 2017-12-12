/* Realice un programa que solicite de la entrada estadar un entero del
10 y muestre en la salida estandar su tabla de multiplicar */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int numero;
	
	do{
	cout<<"Digite un numero: "; cin>>numero;
	}while((numero<1) || (numero>10)); 
	
	for (int i=1;i<=20;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	cout<<"\n\n";
	system("pause");

	return 0;
}
