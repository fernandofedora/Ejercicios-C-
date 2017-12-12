/* La sentencia do while 
do{
conjunto de intrucciones;
}while (exprecion logica);
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int i;
	
	i = 1;
	
	do{
		cout<<i<<endl;
		i++;
	}while(i<=10);
	
	system("pause");
	return 0;
}
