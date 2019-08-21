#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char cat1 []= "reconocer";
	char cat2 []= "reconocer";
	
	//strcpy(cat1,cat2);
	
	strrev(cat1);
	
	if(strcmp(cat1,cat2)==0){
		cout<<"la palabra "<<cat1<< " es polindroma"<<endl;
	}
	else{
		cout<<"la palabra no es polindroma"<<endl;
		cout<<"Resultados de la palabra invertida"<<cat1<<endl;
	}
	
	getch();
	return 0;
}
