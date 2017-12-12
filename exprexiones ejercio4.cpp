//ejercisio#4. Escriba la siguiente expresion matematica 

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, resultado=0;
	
	cout<<"Digite el valir de a: "; cin>>a;
	cout<<"Digite el valir de b: "; cin>>b;
	cout<<"Digite el valir de c: "; cin>>c;
	cout<<"Digite el valir de d: "; cin>>d;

//	cout<<"Digite el valir de a: "; cin>>a;

resultado = (a+(b/(c-d)));

cout.precision(2);
cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	return 0;
}
