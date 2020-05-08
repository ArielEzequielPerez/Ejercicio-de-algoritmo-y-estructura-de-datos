#include <iostream>

using namespace std;

int main() {
	int num, cont=0, acum=0;
	for(int a=0; a<100; a++){
		cout<<"ingrese numero: "<<endl;
		cin>>num;
		 if(num/3){
		 	
		 	cont++;
			 		 	
		 }
		if(num<25){
			acum=acum+num;
		}
	 if(num>=0){
	 	cout<<"ingrese numero: "<<endl;
	 	cin>>a;
	 } 
	}
	cout<<"el pormedio de los numeros menores a 25 es: "<<acum<<endl;
	cout<<"la cantidad de numero multiplos de 3 es: "<<cont<<endl;
		
	return 0;
}
