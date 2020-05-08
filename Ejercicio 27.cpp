#include <iostream>

using namespace std;

bool  PAR(int num){
	int d;
	d=num%2;
	 if(d==0){
	 	return true;
	 } else{
	 	return false;
	 }
}


int main() {
	int num, par, cont=0;
	
	
	for(int i=0; i<5; i++){
		cout<<"Ingrese numero"<<endl;
		cin>>num;
		
		par= PAR(num);
		 if(par==true){
		 	cont++;
		 }
		
	}
	cout<<"La cantidad de numeros pares son: "<<cont<<endl;
	
	return 0;
}
