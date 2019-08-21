#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	char cat1[] = "Hola que tal ";
	char cat2 [10];
	char cat3 [30];
 	
	cout<<"Digite su nombre "; cin>>cat2;
	
	strcpy(cat3,cat1);
	strcat(cat3,cat2);
	
	cout<<cat3<<endl;
	
	getch();
	return 0;
	 
}
