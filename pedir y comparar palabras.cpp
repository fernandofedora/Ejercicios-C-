/*Pedir al usuario que digite 2 cadenas de caraceres,
e indicar si ambas cadenas son iguales, en caso de no serlo,
indicar cual es mayor alfabeticamente.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra1 [10];
	char palabra2 [10];
	
	cout<<"Digite la palabra 1: "; cin>>palabra1;
	cout<<"Digite la palabra 2: "; cin>>palabra2;
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"las palabras son iguales";
	}
	else if (strcmp(palabra1,palabra2)!=0){
		cout<<"Las palabras son diferentes";
			
	}
	
	

	getch ();
	return 0;
}
