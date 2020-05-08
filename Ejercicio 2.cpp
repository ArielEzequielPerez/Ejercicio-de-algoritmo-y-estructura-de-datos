#include <iostream>
using namespace std;

int main() {
	int num, Q, R, S;
	cout<<"ingrese numero"<<endl;
	cin>> num;
	Q=num/5;
	R=num%5;
	S=num/7;
	cout<<"La quinta parte es: "<<Q<<endl;
	cout<<"el resto de dividir por 5: "<<R<<endl;
	cout<<"la septima parte es: "<<S<<endl; 
	return 0;
}
