// escribe las siguientes expresion como expresion en C++

#include<iostream>

using namespace std;

int main(){
	
	float a,b, resultado =0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2);
	cout <<"\nEl resutaldo:" <<resultado<<endl;
	
	return 0;
}
