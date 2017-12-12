/* Hacer un programa que simule un cajero automatico con un saldo 
de 1000 Dolares.*/

#include<iostream>

using namespace std;

int main(){
	int saldo_inicial = 1000,opc;
	float extra,saldo = 0,retiro;
	
	cout<<"\tBienvenido a su cajero virtual"<<endl;
	cout<<"1.ingresar dinero en cuenta"<<endl;
	cout<<"2.Retirar dinero de la cuenta"<<endl;
	cout<<"3.Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero encuenta :"<<saldo;break;
			
		case 2:
			cout<<"Digite la cantidad de dinero que va a retirar:" ;
		     cin>>retiro;
		     
			if(retiro > saldo_inicial){
				cout<<"No tiene esa cantidad de dinero";
			}
			else{
				saldo = saldo_inicial-retiro;
				cout<<"Dinero en cuena"<<saldo;
		}
			
			
		case 3:	break;
	}
	
	
	return 0;
}
