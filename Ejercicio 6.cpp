#include <iostream>

using namespace std;

int main() {
	int P1, P2, PF;
	char nom[10];
	cout<<"Ingresar nombres"<<endl;
	cin>> nom;
	cout<<"ingrese nota del primer parcial: "<<endl;
	cin>> P1;
	cout<<"ingrese nota del segundo parcial: "<<endl;
	cin>> P2;
	
	PF= P1+P2;
	
	if(PF>=65){
		cout<<"Ingreso"<<endl;
	} else{
		cout<<"No ingreso"<<endl;
	}
	
	return 0;
}
