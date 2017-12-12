# include <iostream>

using namespace std;
 class cuentas{
 	
 	public:
 		int sumaDos(int arg);
 		int sumaTres(int arg);
 	private:
 		int resultado;
 };
int cuentas::sumaDos(int arg){
	resultado = arg + 2;
	return resultado;
}

int cuentas::sumaTres(int arg){
	resultado = arg + 3;
		return resultado;
}

int main(){
	
	cuentas cuenta;
	cout << "+ 2 =" << cuenta.sumaDos(2) << endl;
	cout << "+ 3 =" << cuenta.sumaTres(2) << endl;
	
	cin.get();
	return 0;
}

