#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[30];
	char palabra2[30];
	
	cout<<"Digite una palabra: "; cin>>palabra1;
	cout<<"Digite otra  palabra: "; cin>>palabra2;
	
	strupr(palabra1);
	strupr(palabra2);
	
	cout<<palabra1<<endl;
	cout<<palabra2<<endl;
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Las palabras son iguales\n";
		}else if(strcmp(palabra1,palabra2)!=0){
			cout<<"Las palbras son diferentes.\n";
		}
	
	
	
	
	getch();
	return 0;
}
