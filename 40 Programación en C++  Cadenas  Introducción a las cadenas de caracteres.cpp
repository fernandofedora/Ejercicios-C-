//Cadenas de caractares

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "Fernando";
	char palabra2[] = {'F','e','r','n','a','n','d','o'};
	char nombre[30];
	
	cout<<"Digite su nombre: ";
	//gets(nombre); toma mas memoria de lo que necesita
	cin.getline(nombre,20,'\n'); //guarda completamente mente los cacaracteres la memria de la variabla 
	
	cout<<nombre<<endl;	


	
	
	getch();
	return 0;
}

