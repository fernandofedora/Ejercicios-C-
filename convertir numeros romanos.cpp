/* cambiar un numero entero con el mismo valor pero en  romano

M= 1000
D= 500
C= 100
L = 50
X = 10
V = 5
I = 1
*/

#include<iostream>

using namespace std;

int main(){
	int numero,unidades,decenas, centenas,millar;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	//numero 2152 -> 2000+100+50+2
	
	unidades = numero%10; numero/= 10; 
	decenas = numero%10; numero/=10;
	centenas = numero%10; numero/= 10;
	millar = numero%10; numero/=10;
	
	switch(millar){
		case 1: cout<<"M";break;
		case 2: cout<<"MM";break;
		case 3:	cout<<"MMM";break;
	}
	
	switch(centenas){
		case 1: cout<<"C";break;
		case 2: cout<<"CC";break;
		case 3: cout<<"CCC";break;
		case 4: cout<<"CD";break;
		case 5: cout<<"D";break;
		case 6: cout<<"DC";break;
		case 7: cout<<"DCC";break;
		case 8: cout<<"DCCC";break;
		case 9: cout<<"CM";break;
	}
		switch(decenas){
		case 1: cout<<"X";break;
		case 2: cout<<"XX";break;
		case 3: cout<<"XXX";break;
		case 4: cout<<"XL";break;
		case 5: cout<<"L";break;
		case 6: cout<<"LX";break;
		case 7: cout<<"LXX";break;
		case 8: cout<<"L";break;
		case 9: cout<<"XC";break;
	}
	switch(unidades){
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"IX";break;
	}
	
	return 0;
}
