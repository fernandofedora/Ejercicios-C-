/*9 realice un programa que calcule el valor que toma la siguinete funcion
para unos valores datos de x e y :*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float x, y, resultado = 0;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	
	return 0;
	system("PAUSE");
}
