#include <iostream>

using namespace std;

int main() {
	int num, cont=0, max;
	cout<<"Ingrese numero"<<endl;
	cin>>num;
	
	  while (num>0){
	  	
	  	if(cont==0){
	  		max=num;
	  		cont++;
	  		  		
		  }else{
		  	if(num>max){
		  		max=num;
		  		cont++;
			  }
		  }
	  	cout<<"Ingrese numero"<<endl;
		cin>>num;
	  }
	cout<<"El mayor numero ingresado es: "<<max<<"y la ubicacion es: "<<cont<<endl;
	return 0;
}
