#include<iostream>

using namespace std;

int main(){
	int num1,num2,num3,num4;
	
	cout<<"Digite el primer numero: "<<endl;
	cin>>num1;
	cout<<"Digite el segundo numero: "<<endl;
		cin>>num2;
	cout<<"Digite el tercer numero: "<<endl;
		cin>>num3;
	cout<<"Digite el cuerto numero: "<<endl;
		cin>>num4;
	
	
	
	if(num1==num4){
		cout<<"el primer numero es igual que igual al numero 4";
	}else if(num2==num4){
		cout<<"el numero2 es igual que el numero4";
	}
	else if(num3==num4){
		cout<<"el numero3 es igual al numero4";
	}else{
		cout<<"el cuarto numero no es parecido aninguno";
	}
	
	return 0;
}
