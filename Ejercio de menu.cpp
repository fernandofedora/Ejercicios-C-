
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int numero,opc,resultado;

	
	cout<<"\tBienvenido a su Menu"<<endl;
	cout<<"1.Calcule el cubo de un numero"<<endl;
	cout<<"2. Calcule si un numero es par o impar"<<endl;
	cout<<"3.Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite un numero: ";
			cin>>numero;
			resultado = pow(numero,3);
			cout<<"El resultado es :"<<resultado;break;
			
		case 2:
				cout<<"Digite un numero: ";
			cin>>numero;
	
		if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
			
			
		case 3:	break;
	}
	
	
	return 0;
}
