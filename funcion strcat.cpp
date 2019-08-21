// Añadir o concatenar una cadena con otra - funcion stract()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char cad1[] = "Esto es una cadena";
	char cad2[] = " de un ejemplo";
	char cad3[30];
	
	strcpy(cad3,cad1);// capia todo lo que esta dentro de cad1 en cad3
	strcat(cad3, cad2);
	
	cout<<cad3<<endl;
	
	
	
	getch();
	return 0;
}
