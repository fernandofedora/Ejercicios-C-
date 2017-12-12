/* escriba un progrma que lea de la entrada estrandar un caracter
en la salida sntandar si el caracter es una vocal minucula o no. */

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter: ";
	cin>>letra;
	
if (letra =='a'|| letra=='e'||letra=='i'||letra=='o'||letra=='u'){
	cout<<"Letra miniscula";
}
else if(letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
	cout<<"Letra mayuscula";
}
else{
 cout<<"No es una vocal";	
}

	
	
	
	
	return 0;
}
