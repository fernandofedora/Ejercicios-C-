//pasar una palabra a Mayuscula - funcion strupr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[]= "fernando";
	
	strupr(palabra);
	cout<<palabra<<endl;
	
	
	getch();
	return 0;
}
