#include <iostream>

using namespace std;

int NumPositivo(int num, int cont){

	if(num>0){
		cont++;
	}
	return cont;
}

int main() {
	int num, p, cont=0;
	cout<<"Ingresar numeros"<<endl;
	cin>>num;
	while(num!=0){
	
	cout<<"Ingresar numeros"<<endl;
	cin>>num;
	
	p=NumPositivo(num, cont);
	
}
	cout<<"la cantidad de numeros positivos es: "<<p<<endl;
	
	return 0;
}
